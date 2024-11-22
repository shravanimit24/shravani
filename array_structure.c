#include <stdio.h>
#include <conio.h>

struct stud
{
    char sname[30];
    int roll;
} s[3];

int main()
{
    int i;
    for (i = 0; i<=2; i++)
    {
    printf("enter roll number");
    scanf("%d",&s[i].roll);
    printf("enter name");
    scanf("%s",s[i].sname);



 }
for (int i=0;i<=2;i++)
 {
  printf("roll number is %d \n" ,s[i].roll);
  printf(" name is %s \n" ,s[i].sname);


 }
    return 0;
}


