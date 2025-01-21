#include <stdio.h>
#include <stdlib.h>

int Digits(int num, int digit)
{
    if(num == 0)
        return digit;
    num = num / 10;
    digit++;
    Digits(num, digit);
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("\nDigits in given number is %d\n", Digits(num, 0));

    return 0;
}
