#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], element, i;
    printf("Enter array elements: ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nEnter the element you want to find in array : ");
    scanf("%d", &element);

    for(i = 0;i < 10;i++)
    {
        if(element == num[i])
            printf("\nArray contains a specific value i.e. %d", num[i]);
    }

    return 0;
}
