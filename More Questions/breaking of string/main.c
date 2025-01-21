#include <stdio.h>
#include <stdlib.h>

void breaking(char str[])
{
    int i, j =0, k = 0;
    char word[20][20];
    for(i = 0;i < 20;i++)
    {
        for(j = 0;str[k] != ' ' && str[k] != '\0';j++)
        {
            word[i][j] = str[k];
            k++;
        }
        word[i][j] = '\0';
        k++;
    }
    for(int i = 0;i < 20;i++)
    {
        printf("%s", word[i]);
        printf("\n");
    }
}

int main()
{
    char str[100];
    printf("Enter strings : ");
    gets(str);
    printf("\nString after breaking : \n");
    breaking(str);
    return 0;
}
