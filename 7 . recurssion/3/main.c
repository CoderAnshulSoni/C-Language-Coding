#include <stdio.h>
#include <stdlib.h>

void Series(int n, int next_term, int term1, int term2)
{
        printf("%d\n", term1);
        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
        if(n == 1)
            return 0;
        n--;
        Series(n, next_term, term1, term2);
}

int main()
{
    printf("Fibonacci Series\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    Series(n, 0, 0, 1);
    return 0;
}
