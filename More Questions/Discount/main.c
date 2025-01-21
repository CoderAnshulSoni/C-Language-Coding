#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Discount");

    int quantity,res;
    printf("\nEnter the quantity here :  ");
    scanf("%d",&quantity);

    if(quantity>10)
    {
        res = (quantity*100)-(quantity/10)*100;
        printf("\nAmount with discount is %d \n",res);
    }

    return 0;
}
