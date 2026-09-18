 #include <stdio.h>
 int main()// fibonacci series (0,1,1,2,3,5,8,13,21,34.....)
 {
   int n;
   printf("Enter the term of fibonacci series:");
   scanf("%d", &n);
   int a = 0;
   int b = 1;
   printf("%d ", a);
   if (n > 0)
     ;
   for (int i = 2; i <= n; i++)
   {
     printf("%d ", b);
     int temp = b;
     b = a + b;
      a = temp;
   }
 return 0;

 }