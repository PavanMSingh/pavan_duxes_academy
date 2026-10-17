#include <stdio.h>
struct Student {
    int roll;
    float marks;
};

// The pointer lets this function change the original student's marks
void updateMarks(struct Student *s) {
    s->marks = 85;  // Same as (*s).marks = 85
}

int main() {
    struct Student student = {101, 75};

    printf("Before: %.0f\n", student.marks);

    // Pass the address of student to the function
    updateMarks(&student);

    printf("After: %.0f\n", student.marks);

    return 0;
}
/*
LOGIC:
1. student starts with marks = 75.
2. &student sends the address of student to updateMarks().
3. s->marks accesses marks through the pointer s.
4. The function changes the original marks to 85.

RUN
Before the function call: student.marks = 75
Inside updateMarks():     s->marks = 85
After the function call:  student.marks = 85

The structure is passed by pointer, so the function changes the
original student's marks.
*/