#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};
int compare(struct Date *pd1, struct Date *pd2)
{
    if(pd1->day == pd2->day && pd1->month == pd2->month && pd1->year == pd2->year)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct Date d1, d2;
    printf("Enter First date : ");
    printf("\nEnter Day : ");
    scanf("%d", &d1.day);
    printf("Enter Month : ");
    scanf("%d", &d1.month);
    printf("Enter Year : ");
    scanf("%d", &d1.year);
    printf("\nEnter second date : ");
    printf("\nEnter Day : ");
    scanf("%d", &d2.day);
    printf("Enter Month : ");
    scanf("%d", &d2.month);
    printf("Enter Year : ");
    scanf("%d", &d2.year);
    int result = compare(&d1,&d2);
    if(result == 1)
    {
        printf("\nDates are equal..\n");
    }
    else
    {
        printf("\nDates are NOT equal..\n");
    }
    return 0;
}
