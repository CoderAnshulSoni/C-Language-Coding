#include <stdio.h>
#include <stdlib.h>

int main()
{
    int City_Temp[2][7];
    printf("\nEnter Temperature of first city : ");

    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 7;j++)
        {
            scanf("%d", &City_Temp[i][j]);
        }
        if(i < 1)
            printf("\nEnter Temperature of Second city : ");
    }
    printf("\nTemperature of two cities of a week in Matrix form :\n\n");
    printf("City 1 : ");
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 7;j++)
        {
            printf("%d ", City_Temp[i][j]);
        }
        printf("\n");
        if(i < 1)
            printf("City 2 : ");
    }
    return 0;
}
