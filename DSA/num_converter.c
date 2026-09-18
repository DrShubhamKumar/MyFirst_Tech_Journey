#include <stdio.h>
#include <stdlib.h>
// stack implement using linked list
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Stack heap memory is overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed element is:%d\n", value);
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack is underflow!\n");
        // return;
    }
    struct Node *temp = top;
    printf("Poped element:%d\n", temp->data);
    top = top->next;
    free(temp);
}
void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("Stack top data:%d\n", top->data);
    }
}
void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    struct Node *temp = top;
    printf("Remaining Stack element after pop:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    display();
    return 0;
}