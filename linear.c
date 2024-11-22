#include <stdio.h>

int main() {
    int n, x, found = 0;

    // Accepting the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    // Accepting the elements of the array
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Accepting the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &x);

    // Performing linear search
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            printf("Element %d found at index %d.\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}
