#include <stdio.h>
#include <stdlib.h>

//*11.*//

int main()
{
    int row, s = 1, i = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    s = row;

    while(s > 0)
    {
        for(i = 1; i <= s; i++)
        {
            printf("* ");
        }
        printf(" \n");
        s--;
    }

    return 0;
}
