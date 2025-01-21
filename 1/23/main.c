#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to enter Principal, Time, Rate to calculate & print Simple Interest\n");

    int SI, p, r, T;

    printf("\nEnter Principle: ");
    scanf("%d", &p);

    printf("\nEnter Rate: ");
    scanf("%d", &r);

    printf("\nEnter Time: ");
    scanf("%d", &T);

    SI = (p * r * T )/100;

    printf("\nSimple Interest is %d.\n", SI);

    return 0;
}
