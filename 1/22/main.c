#include <stdio.h>
#include <stdlib.h>

int main()
{
    int science, maths, physics, english, hindi, total, average, percentage;

    printf("\nMaximum marks to be scored in subjects are 75.\n");

    printf("\nEnter Science marks : ");
    scanf("%d", &science);

    printf("\nEnter Maths marks : ");
    scanf("%d", &maths);

    printf("\nEnter Physics marks : ");
    scanf("%d", &physics);

    printf("\nEnter English marks : ");
    scanf("%d", &english);

    printf("\nEnter Hindi marks : ");
    scanf("%d", &hindi);

    total = science + maths + physics + english + hindi;
    average = total/5;
    percentage = (total*100/375);

    printf("\nTotal marks obtained : %d ", total);

    printf("\nAverage marks obtained : %d ", average);

    printf("\nPercentage marks obtained : %d%%", percentage);

    return 0;
}
