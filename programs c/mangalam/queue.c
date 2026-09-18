// #include<stdio.h>
// #define size 5
// int queue[size];
// int front=-1;
// int rear=-1;
// int isEmpty(){
//    if(front==-1){
//       return 1;
//    }else{
//       return 0;
//    }
// }
// int isFull(){
//    if(rear==size-1||front>rear){
//       return 1;
//    }else{
//       return 0;
//    }
// }
// void Enqueue(int value){
//    if(isFull()){
//       printf("Queue is underFlow!\n");
//    }else{
//       if(front==-1){
//          front=0;
//       }
//       rear++;
//       queue[rear]=value;
//       printf("Insert element:%d\n",value);
//    }
// }
// void Dequeue(){
//    if(isEmpty()){
//       printf("Queue is empty!\n");
//    }else{
//       printf("Deleted element:%d\n",queue[front]);
//       front++;
//    }
// }

// void Display(){
//    if(isEmpty()){
//       printf("Queue is empty!\n");
//    }else{
//       printf("All remaining Queue Element is:\n");
//       for(int i=front;i<=rear;i++){
//          printf("%d\t",queue[i]);
//       }
//    }
// }


// int main(){
//    Enqueue(10);
//    Enqueue(20);
//    Dequeue();
//    Enqueue(30);
//    Enqueue(40);
//    Enqueue(50);
//    // Dequeue();
//    Display();

//    return 0;
// }

//write a c program of circular queue implementation using array
// #include<stdio.h>
// #define size 5
// int c_queue[size];
// int front=-1;
// int rear=-1;

// //isEmpty function
// int isEmpty(){
//    if(front==-1){
//       return 1;
//    }else{
//       return 0;
//    }
// }

// //isFull Function
// int isFull(){
//    if(front==(rear+1)%size){
//       return 1;
//    }else{
//       return 0;
//    }
// }

// //Enqueue function
// void Enquue(int value){
//    if(isFull()){
//       printf("Cicular Queue is Overflow!\n");
//    }else{
//       if(front==-1){
//          front=rear=0;
//       }else{
//        rear=(rear+1)%size;
//       }
//          c_queue[rear]=value;
//          printf("Inseted element:%d\n",value);
        
      
//    }
// }

// //Dequeue function
// void Dequeue(){
//    if(isEmpty()){
//       printf("Circular is overFlow!\n");
//    }else{
//       printf("Deleting element:%d\n",c_queue[front]);
//       if(front==rear){
//          front=rear=-1;
//       }else{
//          front=(front+1)%size;

//       }

//    }
// }

// //Display function
// void Display(){
//    if(isEmpty()){
//       printf("Circular Queue is Empty!\n");
//    }else{
//       int i=front;
//       printf("Queue element:\n");
//       while(1){
//          printf("%d\n",c_queue[i]);
//          if(i==rear){
//             break;
//          }
//          i=(i+1)%size;
//       }
//       printf("\n");
//    }
// }
// //main function
// int main(){
//    Enquue(10);
//    Enquue(20);
//    Enquue(30);
//    Enquue(40);
//    Enquue(50);
//    Dequeue();
//    Display();
// }



//Write a c program Priority Queue implementation using array.High priority value first prefrence.locate front(0 index)
// #include<stdio.h>
// #include<stdlib.h>
// #define size 5

// typedef struct{
//    int data;
//    int priority;
// }Node;

// Node p_queue[size];
// int front=-1;
// int rear=-1;

// int isEmpty(){
//    if(front==-1 && rear==-1){
//       return 1;
//    }else{
//       return 0;
//    }
// }
// int isFull(){
//    if(rear==size-1){
//       return 1;
//    }else{
//       return 0;
//    }
// }

// void Enqueue(int value,int priority){
//    if(isFull()){
//       printf("Priority Queue is overFlow!\n");
//    }
//    Node newNode;
//    newNode.data=value;
//    newNode.priority=priority;
//    if(isEmpty()){
//       front=rear=0;
//       p_queue[rear]=newNode;
//    }else{
//       front++;
//       int i;
//       for(i=rear-1;i>=front;i--){
//          if(p_queue[i].priority<priority){
//             p_queue[i+1]=p_queue[i];
//          }else{
//             break;
//          }
//       }
//       p_queue[i]=newNode;
//    }
//    printf("Inserted %d with priority %d\n",value,priority);
// }


// void Dequeue(){
//    if(isEmpty()){
//       printf("Priority queue is underFlow!\n");
//    }
//    printf("Deleted element %d with priority %d\n",p_queue[front].data,p_queue[front].priority);
//    if(front==rear){
//       front=rear=-1;
//    }else{
//       front++;
//    }
// }

// void Display(){
//    if(isEmpty()){
//       printf("Priority queue is already empty!\n");
//    }
//    printf("Printed all element:\n");
//    for(int i=front;i<=rear;i++){
//       printf("%d: %d:\n",p_queue[i].data,p_queue[i].priority);
//    }
// }

// int main(){
//    int choice,value,priority;
//    while(1){
//       printf("\n Priority Queue Operation(Higher priority value first:\n)");
//       printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Exit\n");
//       printf("Enter your choice:");
//       scanf("%d",&choice);
//       switch(choice){
//          case 1:
//          printf("Enter inserted value:");
//          scanf("%d",&value);
//          printf("Enter priority of value:");
//          scanf("%d",&priority);
//          Enqueue(value,priority);
//          break;
//          case 2:
//          Dequeue();
//          break;
//          case 3:
//          Display();
//          break;
//          case 4:
//          exit(0);
//          break;
//          default:
//          printf("Invalid choice:Try again.....\n");
//       }

//    }
//    return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum queue size

typedef struct {
    int data;
    int priority;
} Node;

Node pq[MAX];
int front = -1;
int rear = -1;

// 1. Check if queue is empty
int isEmpty() {
    return (front == -1 && rear == -1);
}

// 2. Check if queue is full
int isFull() {
    return (rear == MAX - 1);
}

// 3. Enqueue function (higher priority value = higher preference)
void Enqueue(int value, int priority) {
    if (isFull()) {
        printf("Queue is full! Cannot insert %d\n", value);
        return;
    }

    Node newNode;
    newNode.data = value;
    newNode.priority = priority;

    if (isEmpty()) {
        front = rear = 0;
        pq[rear] = newNode;
    } else {
        rear++;
        int i;
        // High priority ko front ki taraf shift karo
        for (i = rear - 1; i >= front; i--) {
            if (pq[i].priority < priority) { // Higher priority first
                pq[i + 1] = pq[i];
            } else {
                break;
            }
        }
        pq[i + 1] = newNode;
    }
    printf("Inserted %d with priority %d\n", value, priority);
}

// 4. Dequeue function
void Dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }
    printf("Dequeued element: %d with priority %d\n", pq[front].data, pq[front].priority);

    if (front == rear) {
        front = rear = -1; // Queue empty ho gayi
    } else {
        front++;
    }
}

// 5. Display function
void Display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements (data : priority):\n");
    for (int i = front; i <= rear; i++) {
        printf("%d : %d\n", pq[i].data, pq[i].priority);
    }
}

// 6. Main function
int main() {
    int choice, value, priority;
    while (1) {
        printf("\nPriority Queue Operations (Higher priority value first):\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter priority: ");
                scanf("%d", &priority);
                Enqueue(value, priority);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
