#include <stdio.h>

int main()
 {
    int a[] = {23, 45, 6, 98};
    int min, max;

    min = max = a[0];

    for (int i = 1; i < 4; i++)
    {
    if (a[i] < min)
        {
            min = a[i];
        }


    if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
