#include <stdio.h>
int main()
{
    int I, II,i,j;
    printf("enter first number and second number:");
    scanf("%d %d", &I, &II);
    for (i = I; i <= II; i++)
    {
        for ( j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            if (i == j)
            {
                printf("%d,", i);
            }
        }
    }
    return 0;
}