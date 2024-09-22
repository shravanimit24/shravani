#include<stdio.h>
int main()
{
 int num;
 printf("enter a number");
 scanf("%d",&num);

 if (num%4==0 && num%6==0)
 {
  printf("the number is divisible by both 4 and 6");
 }
 else if (num%4==0)
 {printf("number is only divisible by 4");}

 else if (num%6==0)
 {printf("number is only divisible by 6");}
 else
 {
  printf("not divisible by 4 and 6");
 }
}
