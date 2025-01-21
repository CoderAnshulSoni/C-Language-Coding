#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nEnter number : ");
    scanf("%d", &num);

    if(num % 7 == 0)
    {
        printf("\n%d is divisible by 7..\n", num);
    }
    else
    {
        printf("\n%d is NOT divisible by 7..\n", num);
    }

    return 0;
}
