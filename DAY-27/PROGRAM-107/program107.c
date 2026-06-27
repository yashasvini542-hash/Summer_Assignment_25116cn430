#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};
int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basic);

        emp[i].hra = 0.20 * emp[i].basic;
        emp[i].da = 0.10 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\n----- Salary Details -----\n");
    for(i = 0; i < n; i++) {
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nBasic Salary: %.2f", emp[i].basic);
        printf("\nHRA: %.2f", emp[i].hra);
        printf("\nDA: %.2f", emp[i].da);
        printf("\nGross Salary: %.2f\n", emp[i].gross);
    }

    return 0;
}