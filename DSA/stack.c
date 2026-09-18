// #include <stdio.h>
// #include<string.h>
// #define MAX 5
// int stack[MAX];
// int top = -1;
// void push();
// int pop();
// void display();

// void push(int x)
// {
//     if (top == MAX - 1)
//     {
//         printf("stack is overflow!, can`t push element%d:", x);
//         return;
//     }
//     top++;
//     stack[top] = x;
//     printf("Pushed element:%d\n",stack[top]);
// }

// int pop()
// {
//     if (top == -1)
//     {
//         printf("stack is underflow!, can`t pop element %d:");
//         return -1;
//     }
//     int val = stack[top];
//     top--;
//     return val;
// }
// void display()
// {
//     if (top == -1)
//     {
//         printf("stack is empty!\n");
//         return;
//     }
//     printf("Stack Elements:\n");
//     for (int i = top; i >= 0; i--)
//     {
//         printf("Stack element:%d\n", stack[i]);
//     }
//     printf("\n");
// }

// int main()
// {

//     push(10);
//     push(20);
//     push(30);
//     push(40);
//     printf("Poped element:%d\n", pop());
//     display();

//     return 0;
// }

// write a c program which is implementation of stack using linked list
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *top = NULL;
// int isEmpty()
// {
//     if (top == NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int isFull()
// {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     if (temp == NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         free(temp);
//         return 0;
//     }
// }
// void push(int value)
// {

//     if (isFull())
//     {
//         printf("Stack is overFlow!");
//     }
//     else
//     {
//         struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//         newNode->next = top;
//         newNode->data = value;
//         top = newNode;
//         printf("Pushed element:%d\n", value);
//     }
// }

// void pop()
// {
//     if (isEmpty())
//     {
//         printf("Stack is underFlow!");
//     }
//     else
//     {
//         struct Node *temp = top;
//         printf("Popped element:%d\n", temp->data);
//         top = top->next;
//         free(temp);
//     }
// }

// void display()
// {
//     if (isEmpty())
//     {
//         printf("Stack is empty!\n");
//     }
//     else
//     {
//         struct Node *temp = top;
//         printf("All stack element:\n");
//         while (temp != NULL)
//         {
//             printf("%d\t", temp->data);
//             temp = temp->next;
//         }
//         free(temp);
//     }
// }

// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     push(40);
//     push(50);
//     push(60);
//     pop();
//     display();
// }

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    free(temp);
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack memory full!\n");
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->next = top;
        newNode->data = value;
        top = newNode;
        printf("Pushed Element:%d\n", value);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack underFlow!\n");
    }
    else
    {
        struct Node *temp = top;
        printf("Popped element:%d\n", temp->data);
        // temp = temp->next;
        top=top->next;
        free(temp);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        struct Node *temp = top;
        printf("Stack all element:\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        free(temp);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    display();
    return 0;
}