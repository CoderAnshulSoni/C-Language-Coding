#include <stdio.h>
#include <stdlib.h>
void trim_trailing(char str[])
{
    int j, i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
				j=i;
	}
    str[j+1]='\0';
    printf("\nString after trim trailing whitespace is : %s", str);
    printf(";\n");
}
int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    trim_trailing(str);
    return 0;
}
