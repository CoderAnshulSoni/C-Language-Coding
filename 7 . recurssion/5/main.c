#include <stdio.h>
#include <stdlib.h>

int prime(int num, int count, int i)
{
    if(i == num)
        return count;
    if(num % i == 0)
        count++;
    i++;
    prime(num, count, i);
}

int main()
{
    int num, count;
    printf("Enter number: ");
    scanf("%d", &num);

    if(prime(num, 0, 2) == 0)
        printf("\nNumber is prime.");
    else
        printf("Not prime");

    return 0;
}
