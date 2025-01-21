#include <stdio.h>
#include <stdlib.h>
void strcat(char str1[], char str2[])
{
    char strCat[100];
    int i = 0, j = 0, k = 0;
    for(k = 0;str2[j] != '\0';k++)
    {
        if(str1[i] != '\0')
        {
            strCat[k] = str1[i];
            i++;
        }
        else
        {
            strCat[k] = str2[j];
            j++;
        }
    }
    strCat[k] = '\0';
    printf("\nConcatenate string is %s.\n", strCat);
}
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string one : ");
    gets(str1);
    printf("Enter string two : ");
    gets(str2);
    strcat(str1, str2);
    return 0;
}
