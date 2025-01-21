#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    if(num%3 == 0)
    {
        if(num%10 == 0)
        {
            printf("\nYES the number is divisible by both 3 and 10.\n");
        }
        else
        {
            printf("\nYES the number is divisible by 3, but not with 10.\n");
        }
    }
    else
    {
        printf("\nNO the number is not divisible by both 3 and 10.\n");
    }

    return 0;
}
