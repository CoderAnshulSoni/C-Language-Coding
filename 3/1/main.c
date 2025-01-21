#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("\nEnter age : ");
    scanf("%d", &age);

    if(age >= 60)
    {
        printf("\nPerson is a senior citizen..\n");
    }
    else
    {
        printf("\nPerson is not a senior citizen..\n");
    }

    return 0;
}
