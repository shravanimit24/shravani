//prime number
#include<stdio.h>
#include<conio.h>
int main()
{
int num,cnt=0,i;
printf("enter a no
scanf("%d",&num);
for( i=1;i<=num;i++);
{

 if (num%i==0)
 {
     cnt++;
 }
}


if(cnt>=0)
{
 printf("it is a prime number");
}
else
{
 printf("not prime");
}
}
