#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;

    printf("Enter the marks:");
    scanf("%d",&marks);

    if(marks<=40)
    {
        printf("Person got Grade F.");
    }
    else
    {
        if(marks<=50)
        {
            printf("Person got Grade D.");
        }
        else
        {
            if(marks<=60)
            {
                printf("Person got Grade C.");
            }
            else
            {
                if(marks<=80)
                {
                    printf("Person got Grade B.");
                }
                else
                {
                    printf("Person got Grade A.");
                }
            }
        }
    }
    return 0;
}
