#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100];
    int MAX = 0, size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter array elements : ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < size;i++)
    {
        if(num[i] > MAX)
        {
            MAX = num[i];
        }
    }
    printf("\nMax of all number is %d.\n", MAX);
    return 0;
}
