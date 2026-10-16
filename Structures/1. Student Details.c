#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details\n");
    printf("Roll number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
