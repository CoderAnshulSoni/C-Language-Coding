#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100];
    int count = 0, size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter array elements : ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < size;i++)
    {
        if(num[i] < 0)
            count++;
    }
    printf("\nTotal negative numbers in array is %d .\n", count);
    return 0;
}
