#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int roll_no;
    char name[50];
    int age;
    char address[100];
}s[10];
int main()
{
    int i = 1;
    for(i = 1;i <= 10;i++)
    {
        int j = 0;
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d", &j);
        if(j >= 12 && j <= 14)
            s[i].age = j;
        else
            printf("Invalid Age\n");
        fflush(stdin);
        printf("Enter address: ");
        gets(s[i].address);
        printf("\n");
    }
    for(i = 1;i <= 10;i++)
    {
        printf("\nRoll number %d of student %s whose age is %d has %s address..\n", s[i].roll_no, s[i].name, s[i].age, s[i].address);
    }

    return 0;
}
