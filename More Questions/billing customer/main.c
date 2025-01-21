#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantity, discount, bill, netbill;

    printf("\nEnter quantity of items: ");
    scanf("%d", &quantity);

    if(quantity < 100)
    {
        printf("\nNo discount..\n");
        printf("\nNet bill = %d \n", quantity * 10);
    }
    else
    {
        printf("\nDiscount of 20%% is given..\n");
        printf("\nBill = %d\n", bill = quantity * 10);
        discount = ( 20 * quantity * 10 ) / 100;
        netbill = bill - discount;
        printf("\nNet Bill with discount = %d\n", netbill);
    }

    return 0;
}
