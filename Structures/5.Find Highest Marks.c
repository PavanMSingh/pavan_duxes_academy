#include <stdio.h>
// Structure to store one student's details
struct Student {
    int roll;
    char name[30];
    int marks;
};
int main() {
    // Array of structures to store 5 students
    struct Student students[5];

    // This stores the position of the student with the highest marks
    int highest = 0;

    // Read details for all 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter roll, name, and marks for student %d: ", i + 1);
        scanf("%d %s %d", &students[i].roll,
              students[i].name, &students[i].marks);

        // The first student is the current highest at the start.
        // Compare each student's marks with the current highest.
        if (students[i].marks > students[highest].marks) {
            highest = i; // Save the position of the new highest student
        }
    }
    // Print the name and marks of the student with the highest marks
    printf("\nHighest = %s\n", students[highest].name);
    printf("Marks = %d\n", students[highest].marks);

    return 0;
}
/*
Student entered       Current highest
101 Ravi 78           Ravi (78)
102 Anu 92            Anu (92), because 92 > 78
103 Arun 85           Anu (92), because 85 is not greater than 92
104 Priya 88          Anu (92), because 88 is not greater than 92
105 Kiran 75          Anu (92), because 75 is not greater than 92

Final result:
Highest = Anu
Marks = 92
*/