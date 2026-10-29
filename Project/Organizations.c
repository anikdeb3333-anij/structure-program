#include <stdio.h>

struct Organisation {
    char name[50], location[50];
    int employees;
    float salary;
};

int main() {
    struct Organisation org[5];
    int n, i, choice;

    printf("Enter number of organisations: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        printf("\nOrganisation %d\n", i);
        printf("Name: ");
        scanf(" %49[^\n]", org[i].name);
        printf("Location: ");
        scanf(" %49[^\n]", org[i].location);
        printf("Employees: ");
        scanf("%d", &org[i].employees);
        printf("Average salary: ");
        scanf("%f", &org[i].salary);
    }

    printf("\n1. Show all  2. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (i = 1; i <= n; i++) {
            printf("\nName: %s\nLocation: %s\nEmployees: %d\nSalary: %.2f\n",
                org[i].name, org[i].location,
                org[i].employees, org[i].salary);
        }
    }

    return 0;
}
