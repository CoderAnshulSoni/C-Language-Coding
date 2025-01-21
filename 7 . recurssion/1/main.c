#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Natural no. up to 50 are: ");
    numbers(0);
    return 0;
}
void numbers(int i)
{
    i++;
    printf("\n%d", i);
    if(i == 50)
        return 0;
    numbers(i);
}
