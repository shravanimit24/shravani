#include <stdio.h>

int main() {
    int a[3][3],i,j;
    printf("Enter the elements \n");
    for (int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 3; j++)
         {
        scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");

    }
      int temp ;
    for (int i=0;i<2;i++);
 {
  for (int j=0;j<2;j++);

   {

temp=a[i][j];
a[i][j]=a[j][i];
 printf("transposed matrix is \n");
   }
 }
 for (int i=0;i<2;i++);
 {
  for (int j=0;j<2;j++);
  {
 printf("%d ", a[i][j]);
        }
        printf("\n");
  }
 }

