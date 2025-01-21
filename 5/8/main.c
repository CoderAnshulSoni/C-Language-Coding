#include <stdio.h>
#include <stdlib.h>

//*8.*//

int main()
{
    int row, s = 1, i = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    while(s <= row)
    {
        for(i = 1; i <= s; i++)
        {
            if(i == 1 || i == s || s == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf(" \n");
        s++;
    }
    return 0;
}
