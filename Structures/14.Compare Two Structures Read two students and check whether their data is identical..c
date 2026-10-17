#include <stdio.h>
struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Read the first student's details
    printf("Enter roll number and marks for student 1: ");
    scanf("%d %f", &s1.roll, &s1.marks);

    // Read the second student's details
    printf("Enter roll number and marks for student 2: ");
    scanf("%d %f", &s2.roll, &s2.marks);

    // Compare each member individually
    if (s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("The student data is identical.\n");
    } else {
        printf("The student data is different.\n");
    }
    return 0;
}
/*
LOGIC:
Compare the roll numbers and marks separately.
The data is identical only if both members match.

 RUN:
Student 1: roll = 101, marks = 85
Student 2: roll = 101, marks = 85

s1.roll == s2.roll   -> true
s1.marks == s2.marks -> true

Output: The student data is identical.

If either member is different, the program prints that the data
is different.
*/