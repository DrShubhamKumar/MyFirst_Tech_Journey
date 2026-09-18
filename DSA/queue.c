// #include<stdio.h>
// int sumDigit(int num){
//     int sum=0,temp;
//     if(num==0){
//         return 0;
//     }
//     temp=num%10;
//      sumDigit(num/10);
//     return sum=sum+temp;
// }
// int main(){
//     int num;
//     printf("Enter Number:");
//     scanf("%d",&num);
//     int sod=sumDigit(num);
//     return 0;
// }
 
/*
Queue implement using array
*/

#include<stdio.h>
#define max 5
int front=-1,rear=-1;
int queue[max];


void enqueue(int value){
    if(rear==max-1){
        printf("Queue is overflow\n");
    }else{
        if(front==-1){
            rear=rear+1;
            queue[rear]=value;
            printf("Inserted element:%d\n",value);
        }
    }
}

void dequeue(){
    if(front==-1||front>rear){
        printf("Queue undeflow\n");
    }else{
        printf("Deleted element:%d\n",queue[front]);
    }
}

void peek(){
    if(front==-1||front>rear){
        printf("Queue is empty\n");
    }else{
        printf("front element:%d",queue[front]);
    }
}

void display(){
    if(front==-1||front>rear){
        printf("Queue is empty\n");
    }else{
        printf("Queue element:\n");
        for(int i=front;i>=rear;i--){
            printf("%d\n",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    enqueue(40);
    enqueue(50);
    
    return 0;
}
