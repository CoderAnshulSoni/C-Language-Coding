#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, ln;
    printf("Enter array elements : ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    ln = num[0];
    for(i = 0;i < 10;i++)
    {
        if(num[i] < num[i + 1])
        {
            ln = num[i+1];
        }
        else
        {
            continue;
        }
    }
    if(num[0] > ln)
    {
        printf("\nLargest number in array is %d ", num[0]);
    }
    else
        printf("\nLargest number in array is %d ", ln);

    return 0;
}
