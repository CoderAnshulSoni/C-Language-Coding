#include <stdio.h>
#include <stdlib.h>

//*20.*//

int divisor(int *num)
{
    int i, sum = 0;
    for(i = 1;i < *num; i++)
    {
        if(*num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int num, result;

    printf("\nEnter number: ");
    scanf("%d", &num);

    result = divisor(&num);

    printf("\nSum of all proper divisors of the given number is %d\n", result);

    return 0;
}
