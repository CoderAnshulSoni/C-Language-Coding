#include <stdio.h>
#include <stdlib.h>

//*21.*//

int Perfect_num(int num)
{
    int i, sum = 0;
    for(i = 1;i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    printf("\nProgram to check whether a number is perfect number or not..\n");

    int num, result;

    printf("\nEnter number: ");
    scanf("%d", &num);

    result = Perfect_num(num);

    if(result == num)
    {
        printf("\nNumber is a Perfect Number..\n");
    }
    else
    {
        printf("\nNumber is NOT a Perfect Number..\n");
    }

    return 0;
}
