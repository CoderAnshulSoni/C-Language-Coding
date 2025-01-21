#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nAge Categories\n");

    int age;

    printf("\nEnter the age of Person: ");
    scanf("%d",&age);

    if(age <= 5)
    {
        printf("\nPerson is an infant.\nInfants: Soo Cute\n");
    }
    else
    {
        if(age >= 13 && age <= 19)
        {
            printf("\nPerson is teenager.\nTeenager: Beware of my Tantrums\n");
        }
        else
        {
            if(age > 60)
            {
                printf("\nPerson is a senior citizen.\nSenior Citizen: Earn extra interest on fixed deposits.\n ");
            }
            else
            {
                printf("\nPerson is others.\nOthers: Damnn!!!!!\n");
            }
        }
    }

    return 0;

    }
