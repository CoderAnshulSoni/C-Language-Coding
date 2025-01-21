#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    printf("Enter name : ");
    gets(name);
    printf("\nAscii value's are : \n\n");
    for(int i = 0;name[i] != '\0';i++)
    {
        printf("%c is %d\n", name[i], name[i]);
    }
    return 0;
}
