//WAP to copy contents of one file to another
#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;

    char file1[100];
    char file2[100];
    printf("write the file name from which the content is to be copied:\n");
    scanf("%s", file1);
    fflush(stdin);
    printf("write the file name in which content is to be copied:\n");
    scanf("%s", file2);
    fflush(stdin);

    fptr1 = fopen(file1, "r");
    fptr2 = fopen(file2, "w");

    char ch;

    while ((ch = fgetc(fptr1)) != EOF)
    {
        fputc(ch, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
}
