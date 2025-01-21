#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100];
    int even = 0, odd = 0, size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter array elements : ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < size;i++)
    {
        if(num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nEven : %d\n", even);
    printf("\nOdd : %d\n", odd);
    return 0;
}
