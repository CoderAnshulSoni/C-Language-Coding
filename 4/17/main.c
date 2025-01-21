#include <stdio.h>
#include <stdlib.h>

//*17.*//

int prime(int num)
{
    int i = 2, result = 0;
    while(num > i)
    {
        if(num % i == 0)
        {
            result = result + 1;
        }
        i = i + 1;
    }
    return result;
}

int factors(int num)
{
    int i = 1, sum = 0, res;
    while(i < num)
    {
        if(num % i == 0)
        {
           res = prime(i);
           if(res == 0)
           {
               sum = sum + i;
           }
        }
        i++;
    }
    return sum;
}

int main()
{
    printf("Program to return sum of prime factors of a given number...\n");

    int num, res;

    printf("\nEnter number: ");
    scanf("%d", &num);

    printf("Sum of prime factors of a given number is %d \n", factors(num));

    return 0;
}
