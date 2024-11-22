#include <stdio.h>

int main() {
    int n, search, find = 0;

    // Accepting the size of the array

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Accepting the elements of the array
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Accepting the value to be searched
    printf("Enter the element to search: ");
    scanf("%d", &search);


    for (int i = 0; i < n; i++)

    {
        if (arr[i] == search)
        {
            printf("Element %d found at index %d.\n", search, i);
            find = 1;
            break;
        }
    }

    if (!find) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
