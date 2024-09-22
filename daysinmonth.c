#include<stdio.h>

int main()
{ int a;
printf("enter no of month");
scanf("%d",&a);
switch(a)
{ case 1:
  case 3:
  case 5:
case 7:
case 8:
case 10:
case  12:
printf("there are 31 days in month");
break ;
 case 4:
case 6:
case 9:
case 11:
printf("there are 31 days in month");
break;
case 2:
printf("there are 28 days in month");
break;
default:
printf("invalid input");
}








}











