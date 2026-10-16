#include <stdio.h>
struct Student {
    char name[30];
    int marks;
};
int main() {
    struct Student s[5], temp;

    for (int i = 0; i < 5; i++) { // Read 5 students
        printf("Enter name and marks: ");
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    for (int i = 0; i < 4; i++) { // Sort from highest marks to lowest
        for (int j = i + 1; j < 5; j++) {

            if (s[i].marks < s[j].marks) { // Compare the current student with the next students.
                temp = s[i];   // If the next student has more marks, swap their details.
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nStudent\tMarks\n"); // Display the sorted list
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\n", s[i].name, s[i].marks);
    }
    return 0;
}
/*

Starting order:
Ravi 65, Anu 95, Rahul 89, Priya 82, Kiran 76
First outer loop (i = 0):
Compare Ravi 65 with Anu 95   -> swap
Compare Anu 95 with Rahul 89  -> no swap
Compare Anu 95 with Priya 82  -> no swap
Compare Anu 95 with Kiran 76  -> no swap
Result: Anu 95, Ravi 65, Rahul 89, Priya 82, Kiran 76

Second outer loop (i = 1):
Compare Ravi 65 with Rahul 89 -> swap
Compare Rahul 89 with Priya 82 -> no swap
Compare Rahul 89 with Kiran 76 -> no swap
Result: Anu 95, Rahul 89, Ravi 65, Priya 82, Kiran 76

Third outer loop (i = 2):
Compare Ravi 65 with Priya 82 -> swap
Compare Priya 82 with Kiran 76 -> no swap
Result: Anu 95, Rahul 89, Priya 82, Ravi 65, Kiran 76

Fourth outer loop (i = 3):
Compare Ravi 65 with Kiran 76 -> swap
Result: Anu 95, Rahul 89, Priya 82, Kiran 76, Ravi 65

Final order:
Anu 95, Rahul 89, Priya 82, Kiran 76, Ravi 65
*/