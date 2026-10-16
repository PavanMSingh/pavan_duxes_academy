#include <stdio.h>
// Structure for storing one employee's details
struct Employee {
    int id;
    char name[30];
    float salary;
};
int main() {
    // Array to store details of 5 employees
    struct Employee emp[5];
    // Read each employee's details
    for (int i = 0; i < 5; i++) {
        printf("Enter ID, name, and salary for employee %d: ", i + 1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
    // Display all employee details
    printf("\nEmployee Details\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }
    return 0;
}
/*
Input:
101 Ravi 25000
102 Anu 30000
103 Arun 28000
104 Priya 32000
105 Kiran 27000

The first loop stores each row in the emp array:
emp[0] = {101, Ravi, 25000}
emp[1] = {102, Anu, 30000}
emp[2] = {103, Arun, 28000}
emp[3] = {104, Priya, 32000}
emp[4] = {105, Kiran, 27000}

The second loop displays emp[0] through emp[4], one employee at a time.
*/