#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

// const prevents this function from changing the structure
void display(const struct Student *s) {
    printf("Roll number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    // s->marks = 90; // Not allowed: s points to const data
    // Uncomment this line to see a compiler error:
    // s->marks = 90.0f;
    // Error: cannot assign to a member through a pointer to const data.
}

int main(void) {
    struct Student student = {101, 85.5f};

    display(&student); // Pass the address of student

    return 0;
}