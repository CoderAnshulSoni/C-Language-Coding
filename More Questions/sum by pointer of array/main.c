#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6] = {10,544,6,15,25,20};
    int *ptr = arr;
    int sum = 0;
    for( int i = 0;i < 6;i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("\nSUM is %d\n", sum);
    return 0;
}
