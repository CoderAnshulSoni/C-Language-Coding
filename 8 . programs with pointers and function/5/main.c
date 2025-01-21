#include <stdio.h>
#include <stdlib.h>

int first(int *num)
{
    if(*num < 10)
        return 0;
    *num = *num / 10;
    first(num);
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    first(&num);
    printf("\nFirst digit is %d.\n", num);
    return 0;
}
