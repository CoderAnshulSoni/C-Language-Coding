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
    int num, count;
    printf("Enter number : ");
    scanf("%d", &num);
    count = prime(&num, 0, 1);
    if(count == 1)
        printf("\nNumber is Prime number.\n");
    else
        printf("\nNumber is NOT a Prime number.\n");
    return 0;
}
