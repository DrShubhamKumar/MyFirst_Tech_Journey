#include <stdio.h>
int main()
{
    long int n;
    printf("enter number:");
    scanf("%d", &n);
    if (n % 9 == 0)
    {
        printf("9");
    }
    else
    {
        printf("%d ", n % 9);
    }
}