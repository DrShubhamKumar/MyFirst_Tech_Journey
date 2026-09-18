#include<stdio.h>
#include<string.h>
struct student{
    int rollNumber;
    char name[30];
    float marks;

};
int main()
{
    int numstudents;
    printf("enter numstudent:");
    scanf("%d",&numstudents);
    for(int i=0;1<numstudents;i++)
    {
        printf("enter details for student %d\n",i+1);
        printf("Roll No.:");
        scanf("%d",&student[i].rollNumber);
    }
}