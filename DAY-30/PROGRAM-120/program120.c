#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};
void addStudents(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n)
{
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

void searchStudent(struct Student s[], int n)
{
    int roll, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found");
            printf("\nRoll No : %d", s[i].roll);
            printf("\nName    : %s", s[i].name);
            printf("\nMarks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nStudent Not Found\n");
}

int main()
{
    struct Student s[100];
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    addStudents(s, n);

    do
    {
        printf("\n\n===== Student Management System =====");
        printf("\n1. Display Students");
        printf("\n2. Search Student");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayStudents(s, n);
                break;

            case 2:
                searchStudent(s, n);
                break;

            case 3:
                printf("\nThank You!");
                break;

            default:
                printf("\nInvalid Choice!");
        }

    } while(choice != 3);
    return 0;
}