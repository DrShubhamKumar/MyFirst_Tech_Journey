// // Practicle No-11
// //Aim:- Write a program for process creation using C.(using of GCC Compiler)


// // set 1:How to take arrival time and brust time
// //Program
// #include<stdio.h>
// int main(){
//     int n,count;
//     int at[10],bt[10];
//     printf("Enter Total Process:\t");
//     scanf("%d",&n);
//     for(count=0;count<n;count++){
//         printf("Enter Arrival and Brust Time for Process Number %d:",count+1);
//         scanf("%d",&at[count]);
//         scanf("%d",&bt[count]);

//     }
//     return 0;
// }

//set 2:How to sort processes based on their Arrival Time for 5 process

// program
#include<stdio.h>
int main(){
    int i,temp,j,f,array[10];
    printf("Enter 5 Process:");
    //read array
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    //bubble sort
    for(i=0;i<10;i++){
        f=1;
        for(j=0;j<9;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                f=0;
            }
        }
        if(f==1)
        break;
    }
    printf("After swaping:");
    for(i=0;i<5;i++){
        printf("%d",array[i]);
    }
}