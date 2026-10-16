#include <stdio.h>
struct Employee { // Structure to store one employee's details
    int id;
    char name[30];
    float salary;
};
int main() {
    struct Employee emp[5];
    int searchID;
    int found = 0;
    for (int i = 0; i < 5; i++) {  // Read details of 5 employees
        printf("Enter ID, name, and salary for employee %d: ", i + 1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
    printf("Enter ID to search: "); // Ask which employee ID to search for
    scanf("%d", &searchID);
    
    for (int i = 0; i < 5; i++) {  // Check each employee's ID
        if (emp[i].id == searchID) {
            printf("\nEmployee Found\n");
            printf("Name: %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
            found = 1;
            break; // Stop searching after finding the employee
        }
    }
    if (found == 0) {
        printf("Employee not found.\n");// Show a message if no employee has that ID
    }
    return 0;
}/*
Employees stored:
101 Ravi  38000
102 Anu   42000
103 Rahul 45000
104 Priya 47000
105 Kiran 40000

Search ID = 103
Check emp[0]: ID 101 == 103? No
Check emp[1]: ID 102 == 103? No
Check emp[2]: ID 103 == 103? Yes
Print Rahul's details and stop searching.

Output:
Employee Found
Name: Rahul
Salary: 45000
*/