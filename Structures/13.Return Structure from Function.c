#include <stdio.h>
struct Student {
    int roll;
    float marks;
};

struct Student createStudent(void) { // This function creates a Student and returns it
    struct Student s;

    printf("Enter roll number and marks: ");
    scanf("%d %f", &s.roll, &s.marks);
    return s;  // Return the complete structure
}

int main() {
    struct Student s;

    s = createStudent();  // Store the structure returned by createStudent()
    printf("\nRoll number: %d\n", s.roll);  // Display the returned student's details
    printf("Marks: %.2f\n", s.marks);
    return 0;
}/*
LOGIC:
1. main() calls createStudent().
2. createStudent() reads the roll number and marks into a structure.
3. It returns that structure.
4. main() stores the returned structure in s and displays its details.

 RUN with input: 101 85.5
createStudent() reads:
s.roll = 101
s.marks = 85.5

The function returns the structure.
main() stores it:
s.roll = 101
s.marks = 85.5

Output:
Roll number: 101
Marks: 85.50

INTERVIEW POINT:
A function in C can return a structure. Here, createStudent()
returns the complete Student structure to main().
*/