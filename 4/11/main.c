#include <stdio.h>
#include <stdlib.h>

//*11.*//

int new_num(int num)
{
    int r = 0;
    while (num != 0)
    {
    r = r * 10;
    r = r + num%10;
    num = num/10;
    }
    return r;
}
int main()
{
    printf("\nReverse of a number.\n");
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nReverse of the number is %d\n", new_num(num));

    return 0;
}
