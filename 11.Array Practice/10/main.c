#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100], even[100], odd[100];
    int e = 0, o = 0, size;
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
            even[e] = num[i];
            e++;
        }
        else
        {
            odd[o] = num[i];
            o++;
        }
    }
    printf("\nEven : ");
    for(int i = 0;i < e;i++)
    {
        printf("%d, ", even[i]);
    }
    printf("\nOdd : ");
    for(int i = 0;i < o;i++)
    {
        printf("%d, ", odd[i]);
    }
    return 0;
}
