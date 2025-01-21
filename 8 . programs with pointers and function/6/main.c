#include <stdio.h>
#include <stdlib.h>

int last(int *num)
{
    *num = *num % 10;
    return 0;
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    last(&num);
    printf("\nLast digit is : %d\n", num);
    return 0;
}
