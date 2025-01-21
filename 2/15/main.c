#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program to calculate profit or loss.\n");

    int cp, sp;

    printf("\nEnter code price: ");
    scanf("%d", &cp);

    printf("\nEnter selling price: ");
    scanf("%d", &sp);

    if(cp > sp)
    {
        printf("\nloss of %d\n", cp-sp);
    }
    else
    {
        if(sp > cp)
        {
            printf("\nProfit of %d\n", sp-cp);
        }
        else
        {
            printf("\nNo profit No loss !!\n");
        }
    }

    return 0;
}
