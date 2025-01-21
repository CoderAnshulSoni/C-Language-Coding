#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    ch = ch - '0';
    printf("IN numbers : %d", ch);

    return 0;
}
