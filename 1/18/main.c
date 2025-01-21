#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totaldays, years, weeks, months, days;

    printf("Enter the total number of days : ");
    scanf("%d", &totaldays);

    years   = (totaldays) / 365;
    months  = (totaldays - years * 365) / 30;
    weeks   = (totaldays - years * 365 - months * 30) / 7;
    days    = (totaldays - years * 365 - months * 30 - weeks * 7) / 1;

    printf("\nTotal number of years : %d", years);
    printf("\nTotal number of months : %d", months);
    printf("\nTotal number of weeks : %d", weeks);
    printf("\nTotal number of days : %d", days);

    return 0;
}
