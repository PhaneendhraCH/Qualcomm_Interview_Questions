/*
    
    Implement Queue using Linked List
    
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    
    int data;
    struct node *link;
    
}*start,*next;


void push(int value){
    
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    
    if (start == NULL){
        start = next = temp;
        return;
    }
    
    struct node *recur = next;
    while(recur->link!=NULL){
        recur = recur->link;
    }
    
    recur->link = temp;
    return;
}

void pop(){
    
    if(start==NULL){
        printf("Queue is Empty\n");
        return;
    }
    
    struct node *temp = start;
    printf("%d has popped out from queue\n",start->data);
    start = start->link;
    free(temp);
    return;
}

void display(){
    struct node *temp;
    temp = start;
    while(temp){
        printf("%d ",temp->data);
        temp = temp->link;
    }
    
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    pop();
    display();
    return 0;
}
