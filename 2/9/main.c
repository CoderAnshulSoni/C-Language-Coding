#include <stdio.h>
#include <stdlib.h>

//*Positive, negative and zero numbers*//

int main()
{
    printf("\nProgram to check whether a number is negative, positive or zero.\n");

    int num;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    if(num < 0)
    {
        printf("\nNumber is negative i.e. %d\n",num);
    }
    else
    {
        if(num == 0)
        {
            printf("\nNumber is zero i.e. %d\n",num);
        }
        else
        {
            printf("\nNumber is positive i.e. %d\n",num);
        }
    }


    return 0;
}
