// // simple question for understanding single linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// int main()
// {
//     // variable declaration
//     struct Node *first = NULL;
//     struct Node *second = NULL;
//     struct Node *third = NULL;
//     struct Node *fourth = NULL;

//     // dynamic memeory allocation
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // data initialize and linking with mutual node
//     first->data = 10;
//     first->next = second;

//     second->data = 20;
//     second->next = third;

//     third->data = 30;
//     third->next = fourth;

//     fourth->data = 40;
//     fourth->next = NULL;
//     // printing all node data with hold another variable
//     struct Node *temp = first;
//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
//     // free of remaining data
//     free(first);
//     free(second);
//     free(third);
//     free(fourth);
//     return 0;
// }

// // simple question for understanding double linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *prev;
//     struct Node *next;
// };
// int main()
// {
//     // variable declaration and initialization with NULL
//     struct Node *first = NULL;
//     struct Node *second = NULL;
//     struct Node *third = NULL;
//     struct Node *fourth = NULL;
//     // dynamic memory allocat
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));
//     // data initialize and linked mutual node
//     first->data = 10;
//     first->prev = NULL;
//     first->next = second;

//     second->data = 20;
//     second->prev = first;
//     second->next = third;

//     third->data = 30;
//     third->prev = second;
//     third->next = fourth;

//     fourth->data = 40;
//     fourth->prev = third;
//     fourth->next = NULL;

//     // print all node data thorugh hold another variable
//     struct Node *temp = first;
//     printf("Forward step:\n");
//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
//     printf("Backward form:\n");
//     temp = fourth;
//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->prev;
//     }
//     printf("NULL\n");
//     free(first);
//     free(second);
//     free(third);
//     free(fourth);
//     return 0;
// }

// simple question for understanding cicular linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    // variable declaration and initialize with NULL
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    // dynamic memory allocation
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // value initialize and linked node with mutual
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = first;
    // print all node data(cicular list) with hold another varibale
    struct Node *temp = first;
    int count = 0;
    while (count<8)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf(".....\n");
    free(first);
    free(second);
    free(third);
    free(fourth);
    return 0;
}