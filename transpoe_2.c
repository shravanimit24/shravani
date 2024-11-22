#include <stdio.h>

#define SIZE 5 // Define the size of the array

int main() {
    int arr[SIZE];

    // Taking input from the user
    printf("Enter %d elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Displaying the array elements
    printf("You entered:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
           }
    printf("\n");

    return 0;
}
