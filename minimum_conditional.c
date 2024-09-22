#include<stdio.h>
 int main()
 {
   int a,b,min;
   printf("enter 2 numbers");
   scanf("%d %d",&a ,&b);

   min=(a<b) ? a : b;
     printf("%d is minimum",min);
 }
