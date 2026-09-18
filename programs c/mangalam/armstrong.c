// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int number;
//     printf("enter number:");
//     scanf("%d", &number);
//     int count = 0;
//     int temp;
//     int power,sum;

//     while (number > 0)
//     {
//         temp = number % 10;
//         printf("  %d", temp);
//         count++;
//                number = number / 10;
//     }
//     sum=count;
//      printf("\n");
//      printf("number of digit:%d", count);
//     return 0;
// }

// #include<stdio.h>
// #include<stdio.h>
// int main(){
//     int number,temp;
//     printf("enter number:");
//     scanf("%d",&number);
//     int count=0;
//     while(number>0){
//         temp=number%10;
//         printf("   %d",temp);
//         count++;
//         number=number/10;
//     }
//     printf("\n");
//     printf("total digit:%d\n",count);
//     return 0;
// }

/*
write a program which is calculate sum of all digit,oposite sequence
 and find pariticipate digit in number.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int number, temp;
    printf("enter number:");
    scanf("%d", &number);
    int sum = 0;

    int count = 0;
    do
    {
        temp = number % 10;
        printf(" %d", temp);
        sum = sum + temp;
        count++;

        number = number / 10;
    } while (number > 0);
    printf("\n");
    printf(" sum of total:%d\n", sum);
    printf("total number of digit:%d\n", count);
    int t;
    int r = 0;

    while (sum > 0)
    {
        t = sum % 10;
        r = r + t;
        printf("%d\n", t);

        sum = sum / 10;
    }
    printf("sum of digit:%d", r);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     long int n;
//     printf("enter number:");
//     scanf("%d", &n);
//     if (n % 9 == 0)
//     {
//         printf("9");
//     }
//     else
//     {
//         printf("%d ", n % 9);
//     }
// }
