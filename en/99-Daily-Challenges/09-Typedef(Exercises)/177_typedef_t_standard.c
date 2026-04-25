/* Objective: Simulate the POSIX/Linux standard, where custom types end in _t.
1. Create a 'typedef float percentage_t;'.
2. Create a 'student_t' struct with name and final_grade (of type percentage_t).
3. Create a function 'void check_passing(student_t s)' that prints if the student passed (grade > 6.0).
4. In main, use these types. Notice how the '_t' helps to identify at a glance that it is a typedef.
*/

#include <stdio.h>

typedef float percentage_t;

typedef struct {
    char *name;
    percentage_t final_grade;
} student_t;

void check_passing(student_t s) {
    if (s.final_grade <= 6.0) {
        printf("The student failed the course\n");
    } else {
        printf("The student passed the course\n");
    }
}

int main() {

    student_t students[5] = {
        {.name = "Julio", .final_grade = 4.6},
        {.name = "Vitor", .final_grade = 8.5},
        {.name = "Gomes", .final_grade = 7.0},
        {.name = "Rodrigo", .final_grade = 5.3},
        {.name = "Pedro", .final_grade = 6.0}
    };

    for (int i = 0; i < 5; i++) {
        printf("Student: %s\nGrade: %.2f\n", students[i].name, students[i].final_grade);
        check_passing(students[i]);
        printf("\n");
    }

    return 0;
}