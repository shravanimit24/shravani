// armstrong number
#include<stdio.h>
#include<conio.h>
int main()
{
int num,r,sum=0;
printf("enter a no.");
scanf("%d",&num);
int n1=num;
while(num>0)
{
 r=num%10;
 sum=sum+(r*r*r);
 num=num/10;
}
if(n1==sum)
{
  printf("it is armstrong number");
}

else
{
 printf("not an armstrong number");
}
}
