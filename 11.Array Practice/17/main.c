#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], size, temp[100], i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("\nEnter array elements : ");
    for(i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0;i < size;i++)
    {
        temp[i] = arr[size-1-i];
    }

    printf("\nArray in reverse order is : ");
    for(int j = 0;j < size;j++)
    {
        printf("%d ", temp[j]);
    }
    printf("\n");

    for(i = 0;i < size;i++)
    {
        if(arr[i] != temp[i])
            break;
    }

    if(i != size)
    {
        printf("\nTherefore, Array is not in Palindrome form..\n");
    }
    else
    {
        printf("\nTherefore, Array is in Palindrome form..\n");
    }
    return 0;
}
