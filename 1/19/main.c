#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Enter angle A : ");
    scanf("%d", &A);

    printf("Enter angle B : ");
    scanf("%d", &B);

    C = 180 - (A + B);

    printf("Angle C is %d", C);
    return 0;
}
