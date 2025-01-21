#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to input month number and print number of days in that month.\n");

    int month;

    printf("\nEnter month number: ");
    scanf("%d", &month);

    switch(month)
    {
    case 1:
        printf("\nJanuary = 31 days.\n");
        break;
    case 2:
        printf("\nFebruary = 28 days.\n");
        break;
    case 3:
        printf("\nMarch = 31 days.\n");
        break;
    case 4:
        printf("\nApril = 30 days.\n");
        break;
    case 5:
        printf("\nMay = 31 days.\n");
        break;
    case 6:
        printf("\nJune = 30 days.\n");
        break;
    case 7:
        printf("\nJuly = 31 days.\n");
        break;
    case 8:
        printf("\nAugust = 30 days.\n");
        break;
    case 9:
        printf("\September = 31 days.\n");
        break;
    case 10:
        printf("\nOctober = 30 days.\n");
        break;
    case 11:
        printf("\nNovember = 31 days.\n");
        break;
    case 12:
        printf("\nDecember = 30 days.\n");
        break;
    default:
        printf("\nINVALID INPUT!!\n");
        break;
    }

    return 0;
}
