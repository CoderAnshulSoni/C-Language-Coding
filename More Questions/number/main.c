#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    switch(num)
    {
    case 0:
        printf("\nZERO\n");
        break;

    case 1:
        printf("\nONE\n");
        break;

    case 2:
        printf("\nTWO\n");
        break;

    case 3:
        printf("\nThree\n");
        break;

    case 4:
        printf("\nFOUR\n");
        break;

    }

    return 0;
}
