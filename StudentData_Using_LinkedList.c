#include <stdio.h>
#include <stdlib.h>

struct student_data{
    
    char name[10];
    int id;
    int subjects;
    int *marks;
    
    struct student_data *link;
    
}*head;

struct student_data *current;

void create_node(){
    
        struct student_data *temp;
        temp = malloc(sizeof(struct student_data));
        temp->link = NULL;
        
        printf("\nEnter name : ");
        scanf("%s",temp->name);
        
        printf("\nEnter Id : ");
        scanf("%d",&temp->id);
        
        printf("\nEnter Total No.of subjects : ");
        scanf("%d",&temp->subjects);
        
        printf("\nEnter marks : ");
        temp->marks = malloc((temp->subjects)*sizeof(int));
        
        for (int i=0; i< temp->subjects; i++){
            scanf("%d",&temp->marks[i]);
        }
    
    if(head == NULL){
        head = temp;
        current = temp;
    }
    else{
        current->link = temp;
        current = temp;
    }
    
    char ch;
    printf("Enter Y to add new node or any button to quit : ");
    scanf(" %c",&ch);
    
    if (ch == 89){
        create_node();
    }
    else{
        return;
    }
}

void display(){
    struct student_data *temp;
    temp = head;
    while(temp){
        printf("\nDetails of Node are : \n");
        printf("%s %d %d\n",temp->name,temp->id,temp->subjects);
        for (int i = 0;i<temp->subjects;i++){
            printf("{%d}",temp->marks[i]);
        }
        temp = temp->link;
    }
}

int main()
{
  create_node();
  display();
}
