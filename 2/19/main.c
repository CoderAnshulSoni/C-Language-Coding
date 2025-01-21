#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Types of Triangle\n");

    int A, B, C;

    printf("Enter the angle A:");
    scanf("%d", &A);

    printf("Enter the angle B:");
    scanf("%d", &B);

    printf("Enter the angle C:");
    scanf("%d", &C);

    if(A==B && B==C)
    {
        printf("\nTriangle is equilateral triangle.\n");
    }
    else
    {
        if((A==B || A==C) && (B!=A || A!=C))
        {
            printf("\nTriangle is isosceles triangle.\n");
        }
        else
        {
            printf("\nTriangle is scalene triangle.\n");
        }
    }
    return 0;
}
