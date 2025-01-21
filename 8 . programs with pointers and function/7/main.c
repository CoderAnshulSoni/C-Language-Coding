#include <stdio.h>
#include <stdlib.h>

int first_digit(int *num, int first)
{
    if(*num < 10)
    {
        first = *num;
        return first;
    }
    *num = *num / 10;
    first_digit(num, first);
}
int last_digit(int *l, int last)
{
    last = *l % 10;
    return last;
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int l = num;
    int sum = first_digit(&num,0) + last_digit(&l, 0);
    printf("\nSum of first and last digit is %d\n", sum);
    return 0;
}
