#include <stdio.h>
#include <stdlib.h>

int numbers(int *num,int n, int sum)
{
    if(*num == n)
        return sum;
    *num = *num + 1;
    sum = sum + *num;
    numbers(num, n, sum);
}
int main()
{
    int i = 0, n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("\nSum of %d natural numbers are %d.\n", n, numbers(&i, n, 0));
    return 0;
}
