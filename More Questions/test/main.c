#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program to find out if the year is a leap year or not\n-----------------------------------------------------");
    int year;

    printf("\nPlease enter the year : ");
    scanf("%d", &year);

    if(year % 400==0)
    {
        printf("\n\nYay we will have an extra day in Feb.\n%d is a leap year.",year);
    }
    else
    {
        if(year % 100==0)
        {
            printf("\n\nWork for 28 days and get paid for the whole month of Feb.\n%d is not a leap year.",year);
        }
        else
        {
            if(year % 4==0)
            {
                printf("\n\nYay we will have an extra day in Feb.\n%d is a leap year.",year);
            }
            else
            {
                printf("\n\nWork for 28 days and get paid for the whole month of Feb.\n%d is not a leap year.",year);
            }
        }
    }
    return 0;
}
