#include <stdio.h>
#include <stdlib.h>

//*10.*//

int product(int num)
{
    int product = 1, i;
    while(num!=0)
    {
        i = num % 10;
        product = product * i;
        num = num / 10;
    }
    return product;
}

int main()
{
    printf("Product of digits of a number.\n");

    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);

    printf("\nProduct of digits of a number is %d\n", product(num));

    return 0;
}
