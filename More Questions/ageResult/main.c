#include <stdio.h>
#include <stdlib.h>

int ageRes(int age)
{
    int ageResult;
    if(age<0)
        ageResult = -1;
    else if(age >= 0 && age <= 5)
        ageResult = 0;
    else if(age >= 6 && age <= 12)
        ageResult = 1;
    else if(age >= 13 && age <= 19)
        ageResult = 2;
    else if(age >= 20 && age <= 50)
        ageResult = 3;
    else if(age >= 51 && age <= 60)
        ageResult = 4;
    else if(age >= 61 && age <= 101)
        ageResult = 5;
    else if(age > 101)
        ageResult = -1;

    return ageResult;
}

int main()
{
    int age, ageResult;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("%d", ageRes(age));
    return 0;
}
