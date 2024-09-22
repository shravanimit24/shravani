#include<stdio.h>
int main()
{
 int h,s,m;
 printf("enter number of hours to connvert");
 scanf("%d",&h);

 m= h*60;
 s=h*3600;

 printf("number of minutes in %d hours is %d",h,m);
 printf("\n number of seconds in %d hours is %d",h,s);
}
