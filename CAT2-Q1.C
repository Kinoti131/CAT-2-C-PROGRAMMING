#include <stdio.h>

#define MAX_NAME_LEN 25
#define MAX_ID_LEN 20
#define MAX_DEPT_LEN 50
#define MAX_EMAIL_LEN 50

struct employee {
    char name[MAX_NAME_LEN];
    int id;
    char department[MAX_DEPT_LEN];
    float salary;
    char email[MAX_EMAIL_LEN];
};

int main() {
    struct employee emp;

    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 55000.50;
    strcpy(emp.email, "john.doe@company.com");

    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}