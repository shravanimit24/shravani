#include <stdlib.h>
int main()
{
    int i, n, *arr;
    printf("enter the size of array : \n");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("enter the elements of the array : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

