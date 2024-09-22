#include<stdio.h>
int main()
{
int i=3,n,a=5;
while(i>0)
{ printf("enter your guess\n");
scanf("%d",&n);
if(n==a)
{
printf("bravoaaaaaaaa!!!! you got it right\n");

break;
}


else
{
    i--;
printf("sorry %d chances left\n",i);
}


if(i==0)
{
    printf(" Opss!!! No attetemt left");
}



}
}
