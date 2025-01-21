#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], sum = 0;
    printf("Enter array elements : ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < 5;i++)
    {
        sum = sum + num[i];
    }
    int average = sum / 5;
    printf("\nAverage of array are %d. \n", average);
    return 0;
}
