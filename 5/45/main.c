#include <stdio.h>
#include <stdlib.h>

//*45*//

int main()
{
    int i, j, n = 0, row;

    printf("Enter Row: ");
    scanf("%d", &row);
    n = row;
    for(i = 1; i <= row; i++)
    {
        for(j = 1;j <= n; j++)
        {
            printf("%d", i);
        }
        n--;
        printf("\n");
    }

    return 0;
}
