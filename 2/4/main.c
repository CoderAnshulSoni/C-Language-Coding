#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nNumber as input \n");

    int num;

    printf("\nEnter the number:");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("\nNumber is even\n");
    }
    else
    {
        printf("\nNumber is odd\n");
    }
    return 0;
}
