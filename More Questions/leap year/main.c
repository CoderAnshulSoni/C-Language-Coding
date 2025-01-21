#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, day;

    printf("Enter year:");
    scanf("%d",&year);

    day = year % 400;

    if(day == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
