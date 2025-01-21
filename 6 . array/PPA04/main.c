#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prices[5] = {67000, 73000, 57000, 63000, 47000};
    int profit[100];
    int i, j, k = 0;
    for(i = 0;i < 5;i++)
    {
        for(j = i;j < 5;j++)
        {
            profit[k] = prices[j] - prices[i];
            k++;
        }
    }
    int max_profit = profit[1];
    for(i = 0;i < k;i++)
    {
        if(profit[i] > max_profit && profit[i] != 0)
            max_profit = profit[i];
    }
    printf("%d", max_profit);
    return 0;
}
