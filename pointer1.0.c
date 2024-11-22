#include<stdio.h>
int main()
{
 int var=10;
 int *ptr = &var;
 printf("address of var: %p\n",ptr);

 printf("value of var: %d\n",*ptr);
}
