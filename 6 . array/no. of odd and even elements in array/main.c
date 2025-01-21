#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], odd = 0, even = 0, i;
    printf("Enter elements of array : ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 10;i++)
    {
        if(num[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nNumbers of odd elements in array are : %d", odd);
    printf("\nNumbers of even elements in array are : %d", even);

    return 0;
}
