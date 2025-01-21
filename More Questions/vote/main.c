#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;

    printf("\nEnter the age of person: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("\nPerson is eligible to vote..\n");
    }
    else
    {
        printf("\nPerson is NOT eligible to vote..\n");
    }

    return 0;
}
