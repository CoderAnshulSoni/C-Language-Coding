#i4nclude <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if (num>=100)
    {
        if(num<=999)
        {
            printf("\n%d is a three digit number.",num);
        }
        else
        {
            printf("\n%d is not a three digit number.",num);
        }
    }

    else
    {
        printf("\n%d is not a three digit number.",num);
    }

    return 0;
}
