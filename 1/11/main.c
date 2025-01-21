#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int Even_Number;

    printf("Enter number of even number:");
    scanf("%d",& number);

    Even_Number = 2 * number;

    printf("\nnth even number is %d\n",Even_Number);

    return 0;
}
