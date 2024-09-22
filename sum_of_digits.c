// sum of digits of a number
#include<stdio.h>
#include<conio.h>
int main()
{
int num,r,sum=0;
printf("enter a no.");
scanf("%d",&num);

while(num>0)
{
 r=num%10;
 sum=sum+r;
 num=num/10;
}
printf("sum of digits is= %d",sum);
}
