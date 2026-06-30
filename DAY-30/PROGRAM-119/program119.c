#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n----- Employee Details -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID : %d", e[i].id);
        printf("\nName        : %s", e[i].name);
        printf("\nSalary      : %.2f\n", e[i].salary);
    }
    return 0;
}