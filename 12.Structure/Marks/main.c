#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no, age, marks;
    char name[100];
};

int main()
{
    struct Student s1;
    printf("Enter roll number : ");
    scanf("%d", &s1.roll_no);
    fflush(stdin);
    printf("Enter name : ");
    gets(s1.name);
    printf("Enter age : ");
    scanf("%d", &s1.age);
    printf("Enter marks : ");
    scanf("%d", &s1.marks);
    printf("\n---------------------------------------------");
    printf("\nRoll number : %d", s1.roll_no);
    printf("\n---------------------------------------------");
    printf("\nName : %s", s1.name);
    printf("\n---------------------------------------------");
    printf("\nAge : %d", s1.age);
    printf("\n---------------------------------------------");
    printf("\nMarks : %d", s1.marks);
    printf("\n---------------------------------------------");
    return 0;
}
