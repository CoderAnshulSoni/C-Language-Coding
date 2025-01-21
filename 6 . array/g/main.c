#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100], size, i, j = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for(i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    int ln = num[0];
    for(i = 0;i < size;i++)
    {
        if(num[i] > ln)
            ln = num[i];
    }
    printf("%d", ln);
    return 0;
}
