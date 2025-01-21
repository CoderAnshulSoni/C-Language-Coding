#include <stdio.h>
#include <stdlib.h>
int product(int *num, int p)
{
    int r;
    if(*num < 1)
        return p;
    r = *num % 10;
    p = p * r;
    *num = *num / 10;
    product(num, p);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("\nProduct of digits are %d\n", product(&num, 1));
    return 0;
}
