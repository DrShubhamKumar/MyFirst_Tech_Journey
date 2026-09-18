// // write a counting defined by user
// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter number:");
//     scanf("%d",&number);
//     for(int i=1;i<=number;i++){
//         printf("%d\n",i);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("enter number:");
//     scanf("%d", &number);
//     int i = 1;
//     while (i <= number)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    int i=1;
    do{
        printf("%d\n",i);
        i++;

     }while(i<=number);
     return 0;
}