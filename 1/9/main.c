#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int Odd_Number;

    printf("Enter number of odd number:");
    scanf("%d",&number);

    Odd_Number = 2 * number - 1;
    printf("\nnth odd number is %d\n", Odd_Number);

    return 0;
}
