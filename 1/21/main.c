#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area, side;

    printf("Enter side of equilateral triangle : ");
    scanf("%d", &side);

    area = (side * side) * 1.732 / 4;
    printf("Area of equilateral triangle is %d", area);

    return 0;
}
