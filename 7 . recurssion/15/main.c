#include <stdio.h>
#include <stdlib.h>

int factors(int num, int factor, int i, int c)
{
    if(i == num)
        return factor;
    if(num % i == 0)
    {
        if(prime(i, 2, 0) == 0)
        {
            printf("%d, ", i);
        }
    }
    i++;
    factors(num, factor, i, c);
}
int prime(int i, int j, int count)
{
    if(i == j)
        return count;
    if(i % j == 0)
        count++;
    j++;
    prime(i, j, count);
}

int main()
{
    int num, factor[100];
    printf("Enter number: ");
    scanf("%d", &num);
    printf("\nPrime factor are 1, ");
    factors(num, factor, 2, 0);
    printf("\n");
    return 0;
}
