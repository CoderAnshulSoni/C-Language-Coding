#include <stdio.h>
#include <stdlib.h>

int sum(int *num, int s)
{
    int r;
    if(*num == 0)
        return s;
    r = *num % 10;
    s = s + r;
    *num = *num / 10;
    sum(num, s);
}
int main()
{
    int num;
    printf("Enter numbers: ");
    scanf("%d", &num);
    printf("%d", sum(&num, 0));
    return 0;
}
