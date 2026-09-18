// // reverse counting defined by user
// #include <stdio.h>
// int main()
// {
//     int reverse;
//     printf("enter any reverse number:");
//     scanf("%d", &reverse);
//     for (int i = reverse; i >= 1; i--)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int reverse;
//     printf("enter any reverse:");
//     scanf("%d",&reverse);
//     int i=reverse;
//     do{
//         printf("%d\n",i);
//         i--;
//     }while(i>=1);
//     return 0;
// }

#include<stdio.h>
int main(){
    int reverse;
    printf("enter any reverse :");
    scanf("%d",&reverse);
    int i=reverse;
    while(i>=1){
        printf(" %d",i);
        i--;
    }
    return 0;
}