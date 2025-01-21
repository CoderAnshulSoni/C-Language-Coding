#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int year;
    int month;
    int date;
}d[2];
int main()
{
    for(int i = 1;i <= 2;i++)
    {
        printf("Enter Date : ");
        scanf("%d", &d[i].date);
        printf("Enter Month : ");
        scanf("%d", &d[i].month);
        printf("Enter Year : ");
        scanf("%d", &d[i].year);
    }
    if(d[1].date == d[2].date && d[1].month == d[2].month && d[1].year == d[2].year)
    {
        printf("\n\nDates are equal..\n");
    }
    else
    {
        printf("\n\nDates are NOT equal..\n");
    }
    return 0;
}
