#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to print largest number from given 3 numbers.\n");

    int n1, n2, n3;

    printf("\nEnter first number:  ");
    scanf("%d", &n1);

    printf("\nEnter second number:  ");
    scanf("%d", &n2);

    printf("\nEnter third number:  ");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3)
    {
        printf("\nThe largest number is first number i.e. %d", n1);
    }
    else
    {
        if(n2>n3)
        {
            printf("\nThe largest number is second number i.e. %d", n2);
        }
        else
        {
            printf("\nThe largest number is third number i.e. %d", n3);
        }
    }

    return 0;
}
