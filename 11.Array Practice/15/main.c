#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], size, k, replace_num, j = 0;
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
    printf("Enter the replace number : ");
    scanf("%d", &replace_num);
    for(int i = 0;i < size;i++)
    {
        if(i == k)
        {
            arr[i] = replace_num;
            j++;
        }
    }
    if(j == 0)
    {
        printf("\nThe entered k position value is not in array..\n");
    }
    else
    {
        printf("\nArray after replacing k index value is : ");
        for(int i = 0;i < size;i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
