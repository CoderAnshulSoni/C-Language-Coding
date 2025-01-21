#include <stdio.h>
#include <stdlib.h>

//*1.*//

int total(int n)
{
    int sum = 0, i = 1;
    while(i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    return sum;
}

int main()
{
    printf("Sum of first n natural numbers.\n");

    int n, sum = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    sum = total(n);

    printf("\nSum is %d\n", sum);
    return 0;
}
