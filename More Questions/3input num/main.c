#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    if(num<100)
    {
        printf("\nNumber is less than 100");
    }
    else
    {
        if(num>99 &&  num<1000)
        {
            printf("\nNumber is a three digit number");
        }
        else
        {
            printf("\nNumber is greater than three digit number");
        }
    }

    return 0;
}
