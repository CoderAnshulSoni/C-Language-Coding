#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("\nEnter the year:");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        printf("\nYear is a leap year.\n");
    }
    else
    {
        printf("\nYear is normal year.\n");
    }
    return 0;
}
