#include<stdio.h>
int power(int ,int);
int main()
{
 int num,pow,result;
 printf("enter the number");
 scanf("%d",&num);
 printf("enter the power");
  scanf("%d",&pow);
  result= power(num,pow);
  printf("the answer is: %d",result);
  return 0;
}
int power(int num, int pow)
{
 int i,rest=1;
 for (i=1;i<=pow;i++)
 {
  rest=rest*num;
 }
 return rest;
}

