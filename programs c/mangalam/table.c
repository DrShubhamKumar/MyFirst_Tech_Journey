// // write a any table defined by user
// #include <stdio.h>
// int main()
// {
//     int table_number;
//     printf("enter any table:");
//     scanf("%d", &table_number);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", i * table_number);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int table_number;
//     printf("enter any table_number:");
//     scanf("%d",&table_number);
//     int i=1;
//     while(i<=10){
//         printf("%d\n",i*table_number);
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int table_number;
    printf("enter any table_number:");
    scanf("%d", &table_number);
    int i = 1;
    do
    {
        printf("%d\n", i * table_number);
        i++;
    } while (i <= 10);
    return 0;
}