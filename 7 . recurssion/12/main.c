#include <stdio.h>
#include <stdlib.h>

int ARRAY(int num[], int i, int size)
{
    if(i == size)
        return 0;
    printf("%d, ", num[i]);
    i++;
    ARRAY(num,i, size);
}
int main()
{
    int num[100], size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("\nEnter array elements: ");
    for(i = 0;i < size;i++)
        scanf("%d", &num[i]);

    printf("\nThe array elements are: ");
    ARRAY(num, 0, size);
    printf("\n");
    return 0;
}
