#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side;
    int area;
    int Perimeter;

    printf("Enter side of square:");
    scanf("%d",&side);

    Perimeter = 4 * side;
    printf("\nPerimeter of square is %d\n",Perimeter);

    area = side * side;
    printf("\nArea of square is %d\n",area);

    return 0;
}
