#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};

// The pointer lets this function update the original employee's salary
void increaseSalary(struct Employee *e) {
    e->salary = e->salary + (e->salary * 0.10);
}

int main() {
    struct Employee employee;

    printf("Enter ID, name, and salary: ");  // Read employee details
    scanf("%d %s %f", &employee.id, employee.name, &employee.salary);

    printf("\nSalary before increase: %.2f\n", employee.salary);

    increaseSalary(&employee);  // Pass the address of employee to the function

    printf("Salary after 10%% increase: %.2f\n", employee.salary);
    return 0;
}/*
1. &employee passes the address of the structure to increaseSalary().
2. e->salary accesses the salary through the pointer.
3. The function adds 10% of the salary to the original salary.

 RUN with input: 101 Ravi 50000

Before the function:
employee.salary = 50000

Inside increaseSalary():
10% of 50000 = 5000
New salary = 50000 + 5000 = 55000

Output:
Salary before increase: 50000.00
Salary after 10% increase: 55000.00
*/