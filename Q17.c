//WAP using function to swap 2 numbers (use call by reference)

#include <stdio.h>
void swap(int*, int*);
int main()
{
    int a, b;
    printf("enter two numbers :\n");
    scanf("%d %d", &a, &b);
    printf("before swapping a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swapping ");
    printf("a=%d b=%d", a, b);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
