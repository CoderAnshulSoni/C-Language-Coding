#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, height, area;

    printf("Enter base of triangle : ");
    scanf("%d", &base);

    printf("\nEnter height of triangle : ");
    scanf("%d", &height);

    area = (base * height) / 2;

    printf("\nArea of triangle is %d ", area);

    return 0;
}
