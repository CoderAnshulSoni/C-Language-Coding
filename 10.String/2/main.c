#include <stdio.h>
#include <stdlib.h>

int strcmp(char *ptr1, char *ptr2)
{
    int i;
    for(i = 0;*ptr1 != '\0' || *ptr2 != '\0';i++)
    {
        if(*ptr1 != *ptr2)
        {
            break;
        }
        *ptr1++;
        *ptr2++;
    }
    return i;
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string here : ");
    gets(str1);
    printf("Enter second string here : ");
    gets(str2);
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int j = strcmp(str1, str2);
    if(j == l1 && j == l2)
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are NOT equal.\n");
    return 0;
}
