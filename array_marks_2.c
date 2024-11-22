#include <stdio.h>
#include <conio.h>

struct stud
{
    char sname[30];
    int roll;
    int marks[3];

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
    printf("enter marks");
    scanf("%d %d %d",&s[i].marks);



 }
for (int i=0;i<=2;i++)
 {
  printf("roll number is %d \n" ,s[i].roll);
  printf(" name is %s \n" ,s[i].sname);
  printf("marks is %d \n" ,s[i].marks);


 }
    return 0;
}


