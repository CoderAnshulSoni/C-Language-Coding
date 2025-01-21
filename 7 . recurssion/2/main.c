#include <stdio.h>
#include <stdlib.h>

int SUM(int n, int sum)
{
    sum = sum + n;
    if(n == 0)
        return sum;
    n--;
    SUM(n, sum);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nSum of n numbers are: %d\n", SUM(n, 0));
    return 0;
}
