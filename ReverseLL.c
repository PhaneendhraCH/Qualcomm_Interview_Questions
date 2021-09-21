/*

Reverse all the elements in Linked List

*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*head;


struct node *currentnode;

void insert(int num)
{
    struct node *newnode;
    newnode = malloc(sizeof(int));
    newnode->data = num;
    
    if(head == NULL){
        head = newnode;
        currentnode = newnode;
    }
    else{
        currentnode->link = newnode;
        currentnode = newnode;
        
    }
}

void reverse(){
    struct node *prev,*next,*current;
    prev = NULL;
    current = head;
    
    while(current!=NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void display(){
    struct node *start;
    start = head;
    
    while(start!=NULL){
        printf("%d  ",start->data);
        start = start->link;
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    
    printf("Initial LL : ");
    display();
    
    reverse();
    printf("\nReverse LL : ");
    display();
}
