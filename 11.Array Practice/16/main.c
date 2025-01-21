#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], size, temp[100];

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("\nEnter array elements : ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0;i < size;i++)
    {
        temp[i] = arr[size-1-i];
    }
    for(int i = 0;i < size;i++)
    {
        arr[i] = temp[i];
    }
    printf("\nArray in reverse order is : ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
