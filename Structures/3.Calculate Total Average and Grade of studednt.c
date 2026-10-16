#include <stdio.h>
struct Student {
    int rollNumber;
    char name[30];
    float marks[3];
};
int main() {
    struct Student student;
    float total, average;
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter name: ");
    scanf("%s", student.name);
    total = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        total += student.marks[i];
    }
    average = total / 3;
    printf("\nRoll number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 60)
        printf("Grade: B\n");
    else if (average >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");
    return 0;
}