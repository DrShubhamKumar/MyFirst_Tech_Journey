#include <stdio.h>
int main()
{
    int marks[3][2]; // 3 students in each 2 subjects marks

    marks[0][0] = 5; // Ist students in 2 subjects
    marks[0][1] = 6;

    marks[1][0] = 10; // IInd students in 2 subject
    marks[1][1] = 20;

    marks[2][0] = 8; // Third students in 2 subjects
    marks[2][1] = 9;
    printf("third student mark in second subject:%d", marks[2][1]);
    return 0;
}