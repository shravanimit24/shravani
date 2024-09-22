// code to find if person is indian citizen

#include<stdio.h>

int main()
{
  char a;
  int age;

  printf("enter 'Y' if indian citizen or enter 'N'");
  scanf("%c",&a);

  if (a== 'Y')
  {
  printf("enter age");
  scanf("%d",&age);

    if(age>=18)
    {
     printf("you are can get a license");
    }

    else
    {
     printf("you are underage");
    }

  else

  {
    printf("onlu indian citizens can get license");
  }
}
}
