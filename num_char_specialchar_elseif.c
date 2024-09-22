#include <stdio.h>
int main()
{
  char ch;
  printf("enter a charcater");
  scanf("%c",&ch);

  if (ch>='A' && ch<= 'Z')
  {
   printf("capital case");
  }

  else if ( ch>='a' && ch<='z')
  {
   printf("small case");
  }

   else if ( ch>=48 && ch<=57)
  {
   printf("digit");
  }

  else
  {
   printf("special character");
  }
}
