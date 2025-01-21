#include <stdio.h>
#include <stdlib.h>

int prime(int *num, int count, int i)
{
    if(i == *num)
        return count;
    if(*num % i == 0)
        count++;
    i++;
    prime(num, count, i);
}

int main()
{
    int n, count, sum = 0;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++)
    {
        count = prime(&i, 0, 1);
        if(count == 1)
            sum = sum + i;
    }
    printf("\nSUM of n prime numbers is %d\n", sum);
    return 0;
}
