#include <stdio.h>
struct Student {
    int marks;
};
int main() {
    struct Student s[5];
    int highest;
    int secondHighest = -1;
    for (int i = 0; i < 5; i++) { //// Read the marks of 5 students
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &s[i].marks);
    }
    
    highest = s[0].marks; // Start by treating the first student's mark as the highest

    for (int i = 1; i < 5; i++) {  // Compare the other students' marks with the current highest
        if (s[i].marks > highest) {
            highest = s[i].marks; // Remember the new highest mark
        }
    }
    for (int i = 0; i < 5; i++) {   // Find the biggest mark that is lower than the highest
        if (s[i].marks < highest && s[i].marks > secondHighest) {
            secondHighest = s[i].marks;
        }
    }
    printf("\nHighest marks: %d\n", highest);
    printf("Second highest marks: %d\n", secondHighest);
    return 0;
}/*
Example marks: 78, 92, 85, 88, 75
Finding the highest:
Iteration 1: start with 78. highest = 78
Iteration 2: 92 is greater than 78. highest = 92
Iteration 3: 85 is not greater than 92. highest = 92
Iteration 4: 88 is not greater than 92. highest = 92
Iteration 5: 75 is not greater than 92. highest = 92

Finding the second highest:
Iteration 1: 78 is below 92. secondHighest = 78
Iteration 2: 92 is not below 92. Skip it.
Iteration 3: 85 is below 92 and greater than 78. secondHighest = 85
Iteration 4: 88 is below 92 and greater than 85. secondHighest = 88
Iteration 5: 75 is below 92 but not greater than 88. secondHighest stays 88

Result:
Highest marks = 92
Second highest marks = 88
*/