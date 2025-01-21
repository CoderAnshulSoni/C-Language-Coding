#include <stdio.h>
#include <stdlib.h>

//*5.*//

int first_digit(int num)
{
    while(num > 9)
    {
        num = num / 10;
    }
    return num;
}

int main()
{
    printf("Number of first_digit in any number.\n");

    int num, digit = 0;

    printf("\nEnter number: ");
    scanf("%d", &num);

    digit = first_digit(num);

    printf("\nNumber of first_digit in the given number is %d\n", digit);

    return 0;
}
