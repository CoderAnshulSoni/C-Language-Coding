#include <stdio.h>
#include <stdlib.h>

int odd(int n, int *num, int sum)
{
    if(*num > n)
        return sum;
    if(*num % 2 != 0)
        sum = sum + *num;
    *num = *num + 1;
    odd(n, num, sum);
}

int main()
{
    int n, i = 0;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("\nSum of n odd numbers are : %d.\n", odd(n, &i, 0));
    return 0;
}
