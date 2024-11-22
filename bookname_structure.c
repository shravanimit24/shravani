#include<stdio.h>
#include<string.h>
struct book
{
    char b_name[30];
    char b_author[30];
    int b_id;
}
e[5];

int main()
{
    int i;
   // for(i=0;i<=0;i++)
    {
        printf("Enter the book details:\n");

        printf("Enter book name:\n");
        fflush(stdin);
        gets(e[i].b_name);

        printf("Enter name of the author:\n");
        fflush(stdin);
        gets(e[i].b_author);

        printf("Enter book id:\n");
        scanf("%d",&e[i].b_id);

        /*printf("Book name:");
        puts(e[i].b_name);
        printf("Book author:");
        puts(e[i].b_author);
        printf("Book ID: %d\n",e[i].b_id);
        puts(e[i].b_id);*/
        printf("value",e[i]);

     }
}
