#include <stdio.h>
#include <stdlib.h>
int POWER(int *num, int *power, int product)
{
    if(*power == 0)
        return product;
    product = product * *num;
    *power = *power - 1;
    POWER(num, power, product);
}
int main()
{
    int num, power;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter power : ");
    scanf("%d", &power);
    printf("\n%d\n",POWER(&num, &power, 1));
    return 0;
}
