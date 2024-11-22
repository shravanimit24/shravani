#include<stdio.h>
int main()
{
 int x=10;
 int *p = 4; // * is also called value of operator / derefrencing operator
 p= &x;// & is called
int *q=p;
  printf(":%p\n",p);
  printf(":%d\n",*p);
  printf(":%d\n:",*q);
}
