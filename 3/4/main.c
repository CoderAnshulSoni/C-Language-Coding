#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks, percentage;

    printf("\nEnter total marks obtained : ");
    scanf("%d", &marks);

    if(marks <= 400)
    {
        printf("\nPercentage obtained is %d%% \n", percentage = marks/4);

        if(percentage >= 35)
        {
            printf("\nPASS\n");
        }
        else
        {
            printf("\nFAIL\n");
        }
    }
    else
    {
        printf("\nINVALID INPUT !! \n");
    }


    return 0;
}
