#include <stdio.h>
#include <stdlib.h>
struct College
{
    char street_name[100];
    char address[100];
};
struct Student
{
    int roll_no;
    int age;
    char name[100];
    struct College c;
};
int main()
{
    struct Student s;
    printf("Enter name : ");
    gets(s.name);
    printf("Enter Roll number : ");
    scanf("%d", &s.roll_no);
    printf("Enter Age : ");
    scanf("%d", &s.age);
    fflush(stdin);
    printf("Enter street name : ");
    gets(s.c.street_name);
    printf("Enter address : ");
    gets(s.c.address);
    printf("\n................................................\n");
    printf("\nName : %s", s.name);
    printf("\nRoll no : %d", s.roll_no);
    printf("\nAge : %d", s.age);
    printf("\nStreet Name : %s", s.c.street_name);
    printf("\nAddress : %s\n", s.c.address);
    return 0;
}
