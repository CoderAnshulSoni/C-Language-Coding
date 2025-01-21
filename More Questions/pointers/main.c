#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    i++;
    printf("%d\n", i);

    char ch = 'a';
    ch++;
    printf("%c\n", ch);

    int *p = &i;
    printf("%u\n", p);
    p++;
    printf("%u\n", p);

    char *pch = &ch;
    printf("%u\n", pch);
    pch++;
    printf("%u\n", pch);

    return 0;

}
