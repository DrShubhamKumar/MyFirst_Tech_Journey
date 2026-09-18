// #include<stdio.h>
// int main()
// {
//     int n,count=0;
//     printf("Enter number:");
//     scanf("%d",&n);
//     if(n==1||n==0)
//     {
//         printf("not valid");
//         return 0;
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count>=1)
//     {
//         printf("not prime");
//     }
//     else{
//         printf(" prime");
//     }
// }

#include<stdio.h>
int prime(int n)
{
    int count=0;
    if(n==0||n==1)
    {
        printf("%d",0);
        // return 0; //composite number
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
count++;

        }
    }
    if(count>=1){
        printf("%d",1);
        // return 1;// not prime
    }
    else{
        printf("%d",2);
        // return 2;//prime
    }
    
}
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    prime(num);
    return 0;
}