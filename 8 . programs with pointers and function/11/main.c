#include <stdio.h>
#include <stdlib.h>
int revers_num(int *num, int r, int reverse)
{
    if(*num == 0)
        return reverse;
    r = *num % 10;
    reverse = reverse + r;
    *num = *num / 10;
    reverse = reverse * 10;
    revers_num(num, r, reverse);
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("\nReverse of given number is %d.\n", revers_num(&num, 0, 0)/10);
    return 0;
}
