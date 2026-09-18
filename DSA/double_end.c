#include<stdio.h>
#include<stdlib.h>
#define size 5
int deque[size];
int front=-1;
int rear=-1;

int isEmpty(){
    if(front==-1)
    return 1;
    else
    return 0;
}


int isFull(){
    if((front==0 && rear==size-1)||(front==rear+1)){
    return 1;
    }
    else{
    return 0;
    }
}

//insert from rear
void insertRear(int val){
    if(isFull()){
        printf("Queue is overflow!");
        return;
    }
    else if(isEmpty()){
        front=rear=0;
    }
    else if(rear==size-1){
        rear==0;
    }else{
        rear++;
    }
    deque[rear]=val;
    printf("Insert at rear:%d\n",deque[rear]);

}

//insert form rear
void insertFront(int value){
    if(isFull()){
        printf("Queue is overflow");
    }
    else if(isEmpty()){
        front=rear=0;
    }
    else if(front==0){
        front=size-1;
    }
    else{
        front--;
    }
    deque[front]=value;
    printf("Insert at front:%d\n",deque[front]);
}

//delete from front position
int deleteFront(){
    if(isEmpty()){
        printf("Dequeu is overflow!\n");
        return 0;
    }
    int delFro=deque[front];
    if(front==rear){
        front=rear=-1;
    }
    else if(front==size-1){
        front==0;
    }else{
        front++;
    }
    return delFro;
}

//Delete from rear
int deleteRear(){
    if(isEmpty()){
        printf("Dequeue is underFlow!\n");
        return -1;
    }
    int delRe=deque[rear];
    if(front==rear){
        front=rear=-1;
    }
    else if(rear==0){
        rear=size-1;
    }
    else{
        rear--;
    }
return delRe;
}

//display situtation of deque
void display(){
    if(isEmpty()){
        printf("Double Ended Queue is Empty!\n");
        return;
    }
    printf("All element of Deque:\n");
    int i=front;
    while(i!=rear){
        printf("%d\n",deque[i]);
        i=(i+1)%size;

    }
    printf("%d\n",deque[rear]);
}

int main(){
    insertFront(10);
    insertFront(20);
    insertFront(30);
    insertFront(40);
    // insertRear(50);
    printf("Delete at front:%d\n",deleteFront());
    // printf("Delete at rear:%d\n",deleteRear());
    display();
    return 0;
}
