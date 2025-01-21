#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to input angles of a triangle and check whether triangle is valid or not.\n");

    int a, b, c;

    printf("\nEnter first angle: ");
    scanf("%d", &a);

    printf("\nEnter second angle: ");
    scanf("%d", &b);

    printf("\nEnter third angle: ");
    scanf("%d", &c);

    if( a+b+c == 180)
    {
        printf("\nTriangle is Valid..\n");
    }
    else
    {
        printf("\nTriangle is not Valid..\n");
    }
    return 0;
}
