#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cp, sp;

    printf("\nEnter cost price : ");
    scanf("%d", &cp);

    printf("\nEnter selling price : ");
    scanf("%d", &sp);

    if( cp >= sp )
    {
        printf("\nThere is no Profit..\n");
    }
    else
    {
        printf("\nThere is a Profit of %d\n", sp - cp);
    }

    return 0;
}
