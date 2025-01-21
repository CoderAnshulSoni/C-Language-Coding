#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[100], arr2[100];
    int merge_array[200];
    int size1, size2, size;
    printf("Enter size of first array : ");
    scanf("%d", &size1);

    printf("Enter size of second array : ");
    scanf("%d", &size2);

    printf("Enter first array elements : ");
    for(int i = 0;i < size1;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter second array elements : ");
    for(int i = 0;i < size2;i++)
    {
        scanf("%d", &arr2[i]);
    }

    size = size1 + size2;
    int k = 0;
    for(int i = 0;i < size;i++)
    {
        if(i < size1)
        {
            merge_array[i] = arr1[i];
        }
        else
        {
            merge_array[i] = arr2[k];
            k++;
        }
    }
    printf("\nMerged array elements are : ");
    for(int i = 0;i < size;i++)
    {
        printf("%d, ", merge_array[i]);
    }
    printf("\n");
    return 0;
}
