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
    int num, n, revers;
    printf("Enter number : ");
    scanf("%d", &num);
    n = num;
    revers = revers_num(&num, 0, 0)/10;
    printf("\nRevers of number is %d.\n", revers);
    if(revers == n)
        printf("Therefore number is palindrome number.\n");
    else
        printf("Therefore number is NOT a palindrome number.\n");

    return 0;
}
