#include <stdio.h>
#include <stdlib.h>

//*7.*//

int main()
{
    int row, s=1, i = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    while(s <= row)
    {
        for(i = 1;i <= s;i++)
        {
            printf("* ");
        }
        printf(" \n");
        s++;
    }

    return 0;
}
