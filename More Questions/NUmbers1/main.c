#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num<100)
    {
        printf("\nEntered number is less than 100.");
    }
    else
    {
        if(num<1000)
        {
            printf("\nEntered number is a 3 digit number.");
        }
        else
        {
            printf("\nEntered number more than 3 digit numbers.");
        }
    }

    return 0;
}
