#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    int breadth;
    int area;
    int Perimeter;

    printf("Enter length of rectangle:");
    scanf("%d",&length);

    printf("\nEnter breadth of rectangle:");
    scanf("%d",&breadth);

    Perimeter=2*(length+breadth);
    printf("\nPerimeter of rectangle is %d\n",Perimeter);

    area=length*breadth;
    printf("\narea of square is %d\n",area);

    return 0;
}
