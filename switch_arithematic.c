#include<stdio.h>
int main()
{
 int a,b,c,func;
 printf("enter two numbers to perform arithematic functions");
 scanf("%d %d",&a,&b);
 printf("\n enter 1 if you want to add ");
 printf("\n enter 2 if you want to subtract");
 printf("\n enter 3 if you want to divide");
 printf("\n enter 4 if you want to multiply");
 printf("\n enter the number of  function you want to perform ");
 scanf("%d",&func);


 switch(func)
 {
   case 1:
   c=a+b;
   printf("addition of both is%d",c);
   break;

   case 2:
   c=a-b;
   printf("subtraction of both is%d",c);
   break;

   case 3:
   c=a/b;
   printf("division of both is%d",c);
   break;

   case 4:
   c=a*b;
   printf("multiplication of both is%d",c);
   break;

   default :
   printf("invalid input");

 }
}
