#include <stdio.h>
#include <stdlib.h>

//*9.*//

int sum(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum = sum + num%10;
        num = num / 10;
    }
    return sum;
}
int main()
{
    printf("Sum of digits of a number.\n");

    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);

    printf("\nSum of digits of a number is %d\n", sum(num));

    return 0;
}
