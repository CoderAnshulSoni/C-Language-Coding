#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], k;
    printf("Enter array elements : ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Enter K : ");
    scanf("%d", &k);
    printf("\nElement at Kth number in array is %d.\n", num[k-1]);
    return 0;
}
