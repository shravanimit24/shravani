//prime number
#include<stdio.h>
#include<conio.h>
int main()
{
int num,count=0,i;
printf("enter a no.");
scanf("%d",&num);
for(int i=1;i<=num;i++);

 if (num%i==0)
 {
     count++;
 }


if(count==0)
{
 printf("it is a prime number");
}
else
{
 printf("not prime");
}
}
