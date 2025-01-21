#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("For age of person i.e. Person is Teenager or not.\n");

    int age;

    printf("\nEnter the age of person:");
    scanf("%d", &age);

    if(age <= 19)
    {
        if(age >= 13)
        {
        printf("\nPerson is a teenager.\n");
        }
        else
        {
            printf("\nPerson is not a teenager.\n");
        }
    }
    else
    {
        printf("person is not an adult.");
    }
    return 0;
}
