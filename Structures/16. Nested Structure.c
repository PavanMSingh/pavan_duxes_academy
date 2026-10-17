#include <stdio.h>
struct Date {  // Date structure stores the day, month, and year
    int day;     //struct Date holds the day, month, and year.
    int month;
    int year;
};
struct Employee {  // Employee contains a Date structure for the joining date
    int id;          //struct Employee contains a joiningDate, which is a struct Date
    char name[30];
    struct Date joiningDate;
};
int main() {
    struct Employee emp;
    printf("Enter employee ID: "); // Read employee details
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter joining date (day month year): ");  // Read the date into the joiningDate structure
    scanf("%d %d %d",&emp.joiningDate.day,&emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee ID: %d\n", emp.id);  // Display the employee's joining date
    printf("Name: %s\n", emp.name);
    printf("Joining date: %02d/%02d/%d\n", emp.joiningDate.day, emp.joiningDate.month,emp.joiningDate.year);
    return 0;
}/*
Use emp.joiningDate.day to access the day.Use emp.joiningDate.month to access the month Use emp.joiningDate.year to access the year.
 RUN with input:
ID: 101
Name: Ravi
Joining date: 10 6 2024
Values stored:
emp.id = 101
emp.name = Ravi                        
emp.joiningDate.day = 10
emp.joiningDate.month = 6
emp.joiningDate.year = 2024
Output:
Employee ID: 101
Name: Ravi
Joining date: 10/06/2024
*/