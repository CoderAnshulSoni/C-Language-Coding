#include <stdio.h>
#include <stdlib.h>

int digits(int *num, int digit)
{
    if(*num == 0)
        return digit;
    *num = *num / 10;
    digit++;
    digits(num, digit);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Digits in given number are : %d", digits(&num, 0));
    return 0;
}
