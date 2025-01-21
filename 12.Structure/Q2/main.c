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
    int i = 1;
    struct Student s[i];
    for(i = 1;i <= 5;i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d", &s[i].age);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    //*----------------------------------------------------*//
    printf("\n\nRoll number %d of student %s whose age is %d got %d marks..\n", s[2].roll_no, s[2].name, s[2].age, s[2].marks);

    return 0;
}
