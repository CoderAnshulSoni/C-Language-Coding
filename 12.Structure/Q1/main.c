#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int roll_no;
    char name[50];
    int age;
    int marks;
};
int main()
{
    struct Student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    fflush(stdin);
    printf("Enter name: ");
    gets(s.name);
    printf("Enter age : ");
    scanf("%d", &s.age);
    printf("Enter marks: ");
    scanf("%d", &s.marks);
    //*----------------------------------------------------*//
    printf("\n\nRoll number %d of student %s whose age is %d got %d marks..\n", s.roll_no, s.name, s.age, s.marks);

    return 0;
}
