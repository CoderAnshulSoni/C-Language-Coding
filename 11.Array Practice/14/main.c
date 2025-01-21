#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], size, k, j = 1;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("\nEnter array elements : ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of k : ");
    scanf("%d", &k);
    k = k-1;
    for(int i = 0;i < size;i++)
    {
        if(i >= k)
        {
            arr[i] = arr[k+j];
            j++;
        }
    }
    if(j == 1)
    {
        printf("\nThe entered k position value is not in array..\n");
    }
    else
    {
        printf("\nArray after removing k index value is : ");
        for(int i = 0;i < size-1;i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
