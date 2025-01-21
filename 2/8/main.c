#include <stdio.h>
#include <stdlib.h>

//*GST*//

int main()
{
    float Bill,amount,GST;

    printf("\nEnter the amount of the item: ");
    scanf("%f",&amount);

    printf("\nEnter the GST percentage applied on the item:");
    scanf("%f",&GST);

    Bill = amount + ( GST/100 * amount) ;
    printf("\nThe total Bill is %g",Bill);

    return 0;
}
