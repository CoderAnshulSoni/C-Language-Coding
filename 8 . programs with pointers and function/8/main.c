#include <stdio.h>
#include <stdlib.h>

int last(int *num, int last_digit)
{
    last_digit = *num % 10;
    return last_digit;
}
int first(int *num, int first_digit)
{
    if(*num < 10 )
    {
        first_digit = *num;
        return first_digit;
    }
    *num = *num / 10;
    first(num, first_digit);
}
int digits(int *i, int digit)
{
    if(*i < 10)
        return digit;
    *i = *i / 10;
    digit++;
    digits(i, digit);
}
int product(int d, int p)
{
    if(d == 1)
        return p;
    p = p * 10;
    d--;
    product(d, p);
}
int swap(int *n, int f, int l, int d)
{
    int p = product(d,1);
    int i = *n - f*p - l;
    *n = l*p + i + f;
    return *n;
}
int main()
{
    int num, n, i, f, l, d;
    printf("Enter number : ");
    scanf("%d", &num);
    n = num;
    i = num;
    l = last(&num, 0);
    f = first(&num, 0);
    d = digits(&i, 1);
    printf("\nNumber after swapping is %d.\n", swap(&n, f, l, d));

    return 0;
}
