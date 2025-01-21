#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program to print week day\n=========================\n");

    int day;

    printf("\nEnter week number:  ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("\nNumber 1 represents Monday\n");
            break;

        case 2:
            printf("\nNumber 2 represents Tuesday\n");
            break;

        case 3:
            printf("\nNumber 3 represents Wednesday\n");
            break;

        case 4:
            printf("\nNumber 4 represents Thursday\n");
            break;

        case 5:
            printf("\nNumber 5 represents Friday\n");
            break;

        case 6:
            printf("\nNumber 6 represents Saturday\n");
            break;

        case 7:
            printf("\nNumber 7 represents Sunday\n");
            break;

        default:
            printf("\nInvalid week number. Valid are 1-7.\n");
    }
    return 0;
}
