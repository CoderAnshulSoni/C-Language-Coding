#include <stdio.h>
#include <stdlib.h>

int prime_factors(int *num)
{
    int sum = 0;
    for(int i = 1;i < *num;i++)
    {
        int count = 0;
        if(*num % i == 0)
        {
            for(int j = 1;j < i;j++)
            {
                if(i % j == 0)
                    count++;
            }
        }
        if(count == 1)
            sum = sum + i;
    }
    return sum;
}

int main()
{
    int num, sum;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("\nSum of prime factors of given number are : ");
    sum = prime_factors(&num);
    printf("%d\n", sum + 1);
    return 0;
}
