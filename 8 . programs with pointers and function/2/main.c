#include <stdio.h>
#include <stdlib.h>

int even(int n, int *num, int sum)
{
    if(*num > n)
        return sum;
    if(*num % 2 == 0)
        sum = sum + *num;
    *num = *num + 1;
    even(n, num, sum);
}

int main()
{
    int n, i = 0;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("\nSum of n even numbers are : %d.\n",even(n, &i, 0));
    return 0;
}
