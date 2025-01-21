#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Even number Test\n");

    int num;
    printf("Enter the number here : ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("Even");
    }
    return 0;
}
