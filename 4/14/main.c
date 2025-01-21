#include <stdio.h>
#include <stdlib.h>

//*14.*//

int result(int num)
{
    int i = 1, product = 1;
    while(i <= num)
    {
        product = product * i;
        i++;
    }
    return product;
}
int main()
{
    printf("Power of any number.\n");

    int num;

    printf("\nEnter number: ");
    scanf("%d", &num);

    printf("\nFactorial is %d.\n", result(num));

    return 0;
}

