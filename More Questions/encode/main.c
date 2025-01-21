#include <stdio.h>
#include <stdlib.h>

void encode(char str[])
{
    for(int i = 0;str[i] != '\0';i++)
    {
        str[i]++;
    }
    printf("%s", str);
}

int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);

    encode(str);

    return 0;
}
