#include <stdio.h>
#include <stdlib.h>
int main()
{
    int prices[7] = {5};
    for(int i = 0;i < 5;i++)
    {
        printf("%d", prices[i]);
    }
    int sn = prices[0];
    int i, j, ln;
    for(i = 0;i < 5;i++)
    {
        if(prices[i] < sn)
        {
            sn = prices[i];
        }
    }
    printf("%d\n", sn);
    ln = sn;
    if(i != 3)
    {
        for(j = i;j < 5;j++)
        {
            if(prices[i] > ln)
            {
                ln = prices[i];
            }
        }
    }
    printf("%d\n", sn);

    return 0;
}
