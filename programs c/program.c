// #include <stdio.h>
// int main()
// {
//     int month_in_digit;
//     printf("enter month_in_digit");
//     scanf("%d", &month_in_digit);
//     switch (month_in_digit)
//     {
//     case 1:
//         printf("January\n");
//         break;
//     case 2:
//         printf("February\n");
//          break;
//     case 3:
//         printf("March\n");
//          break;
//     case 4:
//         printf("April\n");
//          break;
//     case 5:
//         printf("May\n");
//          break;
//     case 6:
//         printf("June\n");
//          break;

//     case 7:
//         printf("July\n");
//          break;
//     case 8:
//         printf("August\n");
//          break;
//     case 9:
//         printf("September\n");
//          break;
//     case 10:
//         printf("October\n");
//         break;
//     case 11:
//         printf("November\n");
//          break;
//     case 12:
//         printf("December\n");
//          break;
//     default:
//         printf("not exist\n");
//     }
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter ch");
//     scanf("%c",&ch);
//     if(ch>='A' && ch<='Z'){
//         printf("upper case");
//     }
//     else if(ch>='a'&&ch<='z')
//     {
//         printf("lower case");
//     }
//     else{
//         printf("other character");
//     }
// return 0;
// // // }
// #include <stdio.h>
//  #include <math.h>
//  int main()
//  {

//     for (int i=1; i <=10; i = i+1)
//     {
//  printf("%d\n",i);
//     // float power=pow(i,i);
//    // printf("%f\n",power);

//     }

//    return 0;
// //  }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     printf("enter n:");
//     scanf("%d", &n);

//     int i = 1;
//     while (i <= n)
//     {
//         printf("%d\n", i);
//         i = i+5;
//     }
//     return 0;
// }
// #include<stdio.h> // write small english alphabate
// int main(){
//    for(char ch='a'; ch<='z';ch++){
//     printf("%c\n",ch);
//    }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);
//     int i=n;
//     while(i>=1){
//         printf("%d",i);
//         i=i-1;
//     }
//     return 0;
// }
// #include<stdio.h>//  factorial of any number
// #include<math.h>
// int main(){
//   int number;
//   printf("enter number:");
//   scanf("%d",&number);
//   int i;
//   int factorial=1;
//   for(int i=number;i>=1;i--){
//     factorial=factorial*i;
//   }
//   printf("%d",factorial);
//   return 0;
// }
// #include<stdio.h>//sum of countinue any number
// #include<math.h>
// int main(){
//   int number;
//   printf("enter number:");
//   scanf("%d",&number);
//   int sum=0;
//   for(int i=0;i<=number;i++){
//  sum=sum+i;
//   }
//   printf("%d",sum);

//   return 0;
// }
//  #include<stdio.h>
//  #include<math.h>
//  int main(){
//      int number;
//      printf("enter number:");
//      scanf("%d",&number);
//     int sum=0;
//   for(int i=1;i<=number;i++){
//      printf("%d\n",i);
//       sum=sum+i;}
//     printf("sum_of_number:%d\n",sum);

//     return 0;
//}
//  #include<stdio.h> //sum of number digit
//  #include<math.h>
//  int main(){
//     int number,digit,sum=0;
//     printf("enter number :");
//     scanf("%d",&number);
// if(number<0){
//     printf("please enter positive number:");
// }
// while(number>0){
//     number=number/10;
// digit=number%10;
// sum=sum+digit;
// number=number/10;
// }printf("sum of digit:%d",sum);
// return 0;

//  }

// #include<stdio.h>/*1st question */
// int main(){
//   float basic_salary;/*basic sallary of ramesh*/
//   printf("enter basic salary of Ramesh:");
//   scanf("%f",&basic_salary);
//   float DA;
//   /*DA is dearness allowance*/
//   DA=basic_salary+basic_salary*40/100;
//   printf("DA is:%f\n",DA);
//   float RA;/*RA is rent allowance*/
//   RA=basic_salary+basic_salary*20/100;
//   printf("RA is:%f\n",RA);
//   float gross_salary;/*groass salary of Ramesh*/
//   gross_salary=DA+RA;
//   printf("gross salary is :%f\n",gross_salary);
//   return 0;
// }
// #include <stdio.h>/*2nd question*/
// int main()
// {
//   float distance_in_Kilometer;
//   printf("enter distance in kilometer:");
//   scanf("%f", &distance_in_Kilometer);
//   float convert_in_to_meter;
//   convert_in_to_meter = distance_in_Kilometer * 1000;
//   printf("meter is:%f\n", convert_in_to_meter);
//   float convert_in_to_centimeter = distance_in_Kilometer * 10000;
//   printf("centimeter is:%f\n", convert_in_to_centimeter);
//   float convert_in_to_feet;
//   convert_in_to_feet = distance_in_Kilometer * 3280.84;
//   printf("feet is:%f\n", convert_in_to_feet);
//   float convert_in_to_inches = distance_in_Kilometer * 3280.84 * 12;
//   printf("inches is:%f\n", convert_in_to_inches);
// }
// #include <stdio.h>
// int main(){
// int number;
// printf("enter number:");
// scanf("%d",&number);
// int num,digit,sum=0;
// while(number>0){
//   digit=number%10;
//   sum=sum+digit;
//   number=number/10;
// }
// printf("%d",sum);
//   return 0;
// }
// /*calculator is sum of Coin */
#include <stdio.h>
int main()
{
    int number, digit, sum = 0;
    printf("enter number:");
    scanf("%d", &number);
    if (number < 10000)
        printf("please enter 5 digit:");
        
    while (number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    printf("sum of digit is:%d", sum);
    return 0;
}
