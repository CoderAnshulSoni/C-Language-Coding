#include <stdio.h>
#include <stdlib.h>

//*4.*//

int digits(int num)
{
    int digit;
    for(digit = 0;num != 0;digit += 1)
    {
        num = num / 10;
    }
    return digit;
}

int main()
{
    printf("Number of digits in any number.\n");

    int num, digit = 0;

    printf("\nEnter number: ");
    scanf("%d", &num);

    digit = digits(num);

    printf("\nNumber of digits in the given number is %d\n", digit);

    return 0;
}
