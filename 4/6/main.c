#include <stdio.h>
#include <stdlib.h>

//*6.*//

int first_digit(int num)
{
    while(num > 9)
    {
        num = num / 10;
    }
    return num;
}
int last_digit(int num)
{
    return num % 10;
}

int main()
{
    printf("Number of first_digit in any number.\n");

    int num, firstdigit = 0, lastdigit = 0;

    printf("\nEnter number: ");
    scanf("%d", &num);

    firstdigit = first_digit(num);

    printf("\nNumber of first digit in the given number is %d\n", firstdigit);

    lastdigit = last_digit(num);

    printf("\nNumber of last_digit in the given number is %d\n", lastdigit);

    return 0;
}

