#include <stdio.h>
#include <stdlib.h>

//*13.*//

int result(int num, int power)
{
    int i = 1, product = 1;
    while(i<=power)
    {
        product = product * num;
        i++;
    }
    return product;
}
int main()
{
    printf("Power of any number.\n");

    int power, num;

    printf("\nEnter number: ");
    scanf("%d", &num);

    printf("\nEnter power: ");
    scanf("%d", &power);

    printf("\nResult is %d.\n", result(num, power));

    return 0;
}
