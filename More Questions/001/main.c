#include <stdio.h>
#include <stdlib.h>

float Area(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float area, radius;
    do
    {
        printf("\nEnter radius: ");
        scanf("%f", &radius);

        area = Area(radius);

        printf("%g\n", area);
    }while(radius != 0);

    return 0;
}
