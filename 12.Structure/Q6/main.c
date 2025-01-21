#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int roll_no;
    char name[50];
    int age;
    char address[100];
}s[10];
void age(int i)
{
    if(s[i].age == 14)
    {
        printf("\nRoll number %d of student %s whose age is %d has %s address..\n", s[i].roll_no, s[i].name, s[i].age, s[i].address);
    }
}
void even()
{
    for(int i=1;i < 10;i++)
    {
        if(s[i].roll_no % 2 == 0)
        {
            printf("\nRoll number %d of student %s whose age is %d has %s address..\n", s[i].roll_no, s[i].name, s[i].age, s[i].address);
        }
    }
}
void user()
{
    int k = 0;
    printf("\nEnter roll number : ");
    scanf("%d", &k);
    for(int i = 0;i <= 10;i++)
    {
        if(k == s[i].age)
            printf("\nRoll number %d of student %s whose age is %d has %s address..\n", s[i].roll_no, s[i].name, s[i].age, s[i].address);
    }
}
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
    for(i = 1;i < 10;i++)
    {
        age(i);
    }
    even();
    user();

    return 0;
}
