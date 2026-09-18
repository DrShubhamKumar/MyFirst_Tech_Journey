#include<stdio.h>
#include<stdlib.h>
#define size 5

typedef struct{
    int data;
    int priority;
}Node;
Node p_queue[size];
int front=-1;
int rear=-1;

int isEmpty(){
    if(front==-1&& rear==-1){
        return 1;
    }else{
        return 0;
    }
}
int isFull(){
    if(rear==size-1){
        return 1;
    }else{
        return 0;
    }
}
void Enueue(int value,int priority ){
    if(isFull()){
        printf("Priority queue is already full,Can't insert this:%d\n",value);
    }
    Node newNode;
    newNode.data=value;
    newNode.priority=priority;
    if(isEmpty()){
        front=rear=0;
        p_queue[rear]=newNode;
    }else{
        rear++;
        int i;
        for(i=rear-1;i>=front;i--){
            if(p_queue[i].priority<priority){
                p_queue[i+1]=p_queue[i];
            }else{
                break;
            }
        }
         p_queue[i+1]=newNode;
            printf("Inserted element:%d with priority:%d\n",value,priority);
    }
}

void Dequeue(){
    if(isEmpty()){
        printf("Bhai,Priority Queue is already empty!\n");
    }
        printf("Deletion element is:%d with priority:%d\n",p_queue[front].data,p_queue[front].priority);
        if(front==rear){
            front=rear=-1;
        }else{
        front++;
        }
    
}

void display(){
if(isEmpty()){
    printf("Bhai,Priority Queue is already empty!\n");
}
printf("All remaing element:\n");
for(int i=front;i<=rear;i++){
    printf("%d:%d\n",p_queue[i].data,p_queue[i].priority);
}
}
int main(){
    Enueue(10,4);
    Enueue(30,2);
    Enueue(20,5);
    Enueue(50,1);
    Enueue(40,3);
    Dequeue();
    display();
    return 0;

}