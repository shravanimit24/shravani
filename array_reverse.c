#include <stdio.h>

int main() {
    int n;

    // Accept the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Accept the elements of the array
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array in reverse order
    printf("The array in reverse order is:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
