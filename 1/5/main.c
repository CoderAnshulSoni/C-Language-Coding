#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    float area;
    float Perimeter;

    printf("Enter radius of circle:");
    scanf("%f", &radius);

    printf("\n%g\n",radius);
    Perimeter = 2 * radius * 3.141592653589793238;
    printf("\nPerimeter of circle is %f\n",Perimeter);

    area = radius * radius * 3.141592653589793238;
    printf("\nArea of circle is %f\n",area);

    return 0;
}
