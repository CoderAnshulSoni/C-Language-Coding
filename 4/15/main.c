#include <stdio.h>
#include <stdlib.h>

//*15.*//

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
int main()
{
    printf("Program to check number is a prime number or not. .\n");
    int num, res;
    printf("\nEnter number: ");
    scanf("%d", &num);

    res = prime(num);

    if(res == 0)
    {
        printf("\nPrime number..\n");
    }
    else
    {
        printf("\nNOT a prime number..\n");
    }

    return 0;
}
