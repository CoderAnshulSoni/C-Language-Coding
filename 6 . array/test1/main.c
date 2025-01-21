#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], i, j = 10;
    for(i = 0;i < 10;i++)
    {
        arr[i] = j;
        j--;
    }
    printf("Elements of array are: ");
    for(i = 0;i < 10;i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}
