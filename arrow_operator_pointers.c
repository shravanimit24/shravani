#include <stdio.h>
#include <conio.h>


struct stud
{
 int roll;
 char sname[20];

};
int main()
{
 struct stud s1,*p;
printf("enter roll number");
 scanf("%d",&s1.roll);
 printf("enter name");
 scanf("%s",s1.sname);
 p=&s1;

 printf("roll number is %d" ,p->roll);
  printf(" name is %s" ,p->sname);

}
