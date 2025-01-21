#include <stdio.h>
#include <stdlib.h>

int ARRAY(int num[], int i, int size, int largest)
{
    if(i == size)
        return largest;
    if(num[i] > largest)
        largest = num[i];
    i++;
    ARRAY(num,i, size, largest);
}
int main()
{
    int num[100], size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("\nEnter array elements: ");
    for(i = 0;i < size;i++)
        scanf("%d", &num[i]);

    printf("\nThe largest array element is : %d\n", ARRAY(num, 0, size, 0));

    return 0;
}
