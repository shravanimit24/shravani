//WAP to create a macro to find area of a rectangle
#include <stdio.h>
#define AREA_RECT(len, wid) ((len) * (wid))
int main()
{
    float length, width, area;
    printf("enter the length of the rectangle : \n");
    scanf("%f", &length);
    printf("enter the width of the rectangle : \n");
    scanf("%f", &width);

    area = AREA_RECT(length, width);
    printf("the area of the rectangle is %.2f\n", area);
    return 0;
}
