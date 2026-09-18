#include <stdio.h>
int main()
{
    int matrix1_array[2][2], matrix2_array[2][2];
    matrix1_array[0][0] = 1;
    matrix1_array[0][1] = 2;

    matrix1_array[1][0] = 3;
    matrix1_array[1][1] = 4;

    matrix2_array[0][0] = 5;
    matrix2_array[0][1] = 6;

    matrix2_array[1][0] = 7;
    matrix2_array[1][1] = 8;
    int e1, e2, e3, e4;
    e1 = matrix1_array[0][0] + matrix2_array[0][0];
    e2 = matrix1_array[0][1] + matrix2_array[0][1];
    e3 = matrix1_array[1][0] + matrix2_array[1][0];
    e4 = matrix1_array[1][1] + matrix2_array[1][1];
    printf("%d\t %d\t", e1, e2);
    printf("\n");
    printf("%d\t %d\t", e3, e4);
    return 0;
}