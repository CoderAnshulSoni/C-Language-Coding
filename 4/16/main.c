#include <stdio.h>
#include <stdlib.h>

//*16.*//

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
    printf("Program to find sum of n prime number. .\n");

    int num, res, i, sum = 0;

    printf("\nEnter number: ");
    scanf("%d", &num);

    for(i = 2;i <= num;i++)
    {
        res = prime(i);

        if(res == 0)
        {
            sum = sum + i;
        }

    }
    printf("Sum of n prime number is %d", sum);

    return 0;
}
