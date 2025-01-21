#include <stdio.h>
#include <stdlib.h>

int check(int num, int arr[], int j)
{
    int count1 = 0;
    for(int i = j-1;i >= 0;i--)
    {
        if(num == arr[i])
        {
            count1++;
        }
    }
    if(count1 != 0)
    {
        return 0;
    }
    else
    {
        count(num, arr);
    }
}
void count(int num, int arr[])
{
    int count = 0;
    for(int i = 0;i < 10;i++)
    {
        if(num == arr[i])
        {
            count++;
        }
    }
    printf("\n%d in array is %d times..", num, count);
}

int main()
{
    int arr[10];
    printf("Enter array elements : ");
    for(int i = 0;i < 10;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i < 10;i++)
    {
        check(arr[i], arr, i);
    }
    return 0;
}
