/*

	Implementation of circular queue using arrays

*/


#include <stdio.h>
#define size 5

int front=-1,rear=-1;
int queue[size];

int isFull(){
    
    if ((front == rear+1) || (front == 0 && (rear == size-1))){
        return 1;
    }
    return 0;
}

int isEmpty(){
    
    if (front == -1){
        return 1;
    }
    return 0;
}

void enqueue(int number){
    
    if(isFull()){
        printf("Circular Queue is Full\n");
        return;
    }
    
    if(front == -1){
        front = rear =0;
        queue[front] = number;
        return;
    }
    
    rear = (rear+1)%size;
    queue[rear] = number;
    return;
    
}

void dequeue(){
    
    int removed;
    if(isEmpty()){
        printf("Circular Queue is Empty\n");
        return;
    }

    if (front == rear){
        front=rear=-1;
    }
    else{
    removed = queue[front];
    front = (front+1)%size;
    return;
    }
}

void display(){
    
    if (isEmpty())
    {   printf("Circular Queue is empty nothing to display\n");
        return;
    }
    for(int i=front;i-1!=rear;i=(i+1)%size){
        printf("%d ",queue[i]);
    }

    return;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}
