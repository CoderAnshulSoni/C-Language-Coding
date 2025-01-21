#include <stdio.h>
#include <stdlib.h>

void trim(char str[])
{
    int k = 0;
    int i, j;
    while(str[k] == ' ')
        k++;
    for(i = 0;str[i] != '\0';i++)
    {
        str[i] = str[k];
        k++;
    }
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
				j=i;
	}
    str[j+1]='\0';
    printf("\nString after trim whitespace is :>%s", str);
    printf(";\n");
}
int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    trim(str);
    return 0;
}
