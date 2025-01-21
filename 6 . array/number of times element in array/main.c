#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int element, count = 0, i;
    printf("Enter array elements: ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nEnter element: ");
    scanf("%d", &element);
    for(i = 0;i < 10; i++)
    {
        if(num[i] == element)
            count++;
        else
            continue;
    }
    printf("Number of times element in array is %d", count);

    return 0;
}
