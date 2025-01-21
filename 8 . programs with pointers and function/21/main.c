#include <stdio.h>
#include <stdlib.h>

//*21.*//

int Perfect_num(int *num)
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
    int i = num;

    result = Perfect_num(&num);

    if(result == i)
    {
        printf("\nNumber is a Perfect number..\n");
    }
    else
    {
        printf("\nNumber is NOT a Perfect number..\n");
    }

    return 0;
}
