#include <stdio.h>
#include <stdlib.h>

int odd(int range, int i)
{
    if(i > range)
        return 0;
    if(i % 2 != 0)
        printf("%d, ", i);
    i++;
    odd(range, i);
}
int even(int range, int i)
{
    if(i > range)
        return 0;
    if(i % 2 == 0)
        printf("%d, ", i);
    i++;
    even(range, i);
}

int main()
{
    int range;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("\nODD numbers are: ");
    odd(range, 1);
    printf("\n\nEVEN numbers are: ");
    even(range, 1);
    printf("\n");
    return 0;
}
