#include <stdio.h>
#include <stdlib.h>

//*Basic Calculator*//

int main()
{
    printf("\nCalculator\n\n");

    printf("^For Addition use function sign as 1 \n\n");
    printf("^For Subtraction use function sign as 2 \n\n");
    printf("^For Multiplication use function sign as 3 \n\n");
    printf("^For Division use function sign as 4 \n\n");

    int fun,add, subtract, multiply,division;

    int no1, no2;

    printf("\nEnter the function sign : ");
    scanf("%d", &fun);

    if(fun == 1 )
    {
        printf("\nEnter no.1:");
        scanf("%d", &no1);

        printf("\nEnter no.2:");
        scanf("%d", &no2);

        add = no1 + no2;
        printf("\nAddition of %d and %d is %d.\n", no1, no2, add);
    }
    else
    {
        if(fun == 2)
        {
            printf("\nEnter no.1:");
            scanf("%d", &no1);

            printf("\nEnter no.2:");
            scanf("%d", &no2);

            subtract = no1 - no2;
            printf("\nSubtraction of %d and %d is %d.\n", no1, no2, subtract);
        }
        else
        {
            if(fun == 3)
            {
                printf("\nEnter no.1:");
                scanf("%d", &no1);

                printf("\nEnter no.2:");
                scanf("%d", &no2);

                multiply = no1 * no2;
                printf("\nMultiplication of %d and %d is %d.\n", no1, no2, multiply);
            }
            else
            {
                if(fun == 4)
                {
                    printf("\nEnter no.1:");
                    scanf("%d", &no1);

                    printf("\nEnter no.2:");
                    scanf("%d", &no2);

                    division = no1 / no2;
                    printf("\nDivision of %d and %d is %d.\n", no1, no2, division);
                }
                else
                {
                    printf("\nInvalid option!!!\n");
                }
            }
        }
    }
    return 0;

}
