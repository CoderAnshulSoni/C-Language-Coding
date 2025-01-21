#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float f = 3.5;
    long ln = 123;

    char* pch;
    float* pf;
    long* pln;

    pch = &ch;
    pf = &f;
    pln = &ln;

    printf("Address of pch\t: %u\n", pch);
    printf("Address of f\t: %u\n", pf);
    printf("Address of ln\t: %u\n", pln);

    return 0;
}
