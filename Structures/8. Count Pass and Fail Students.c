#include <stdio.h>
struct Student {
    int roll;
    float marks;
};
int main() {
    struct Student students[10];
    int passCount = 0;
    int failCount = 0;
    // Read details for 10 students and count passes and fails
    for (int i = 0; i < 10; i++) {
        printf("Enter roll number and marks for student %d: ", i + 1);
        scanf("%d %f", &students[i].roll, &students[i].marks);
       
        if (students[i].marks >= 40) {   // Marks of 40 or more means pass
            passCount++;
        } else {
            failCount++;
        }
    }
    printf("\nNumber passed: %d\n", passCount); // Display the number of students in each group
    printf("Number failed: %d\n", failCount);
    return 0;
}
/*
Student marks: 55, 32, 40, 75, 28, 60, 39, 48, 35, 80
55 >= 40: Pass count = 1
32 < 40:   Fail count = 1
40 >= 40: Pass count = 2
75 >= 40: Pass count = 3
28 < 40:   Fail count = 2
60 >= 40: Pass count = 4
39 < 40:   Fail count = 3
48 >= 40: Pass count = 5
35 < 40:   Fail count = 4
80 >= 40: Pass count = 6
Final counts:
Number passed = 6
Number failed = 4
*/