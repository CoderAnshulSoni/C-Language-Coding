#include <stdio.h>
#include <stdlib.h>

void increment(int *a)
{
    *a = *a + 1;
    return;
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    increment(&num);
    printf("\nNumber after increment is : %d\n", num);
    return 0;
}
