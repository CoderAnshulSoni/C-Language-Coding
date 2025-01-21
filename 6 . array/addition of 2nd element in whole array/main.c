#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, k;
    printf("Enter array elements: ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    k = num[1];
    for(i = 0;i < 10;i++)
    {
        num[i] = num[i] + k;
    }
    num[1] = k;
    printf("Array elements after adding 2nd element of array into the rest of elements : ");
    for(i = 0;i < 10;i++)
    {
        printf("\n%d", num[i]);
    }
    return 0;
}
