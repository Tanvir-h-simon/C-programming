#include <stdio.h>

// Create a structure(class) called student
struct student {
    int marks;
    char grade;
};

int main() {
    // // Create a structure variable of student called student1
    // struct student student_1;
    // // Assign value to members of student_1
    // student_1.marks = 85; // Access a member of a structure using the dot(.) operator
    // student_1.grade = 'A'; 

    struct student student_1 = {85, 'A'}; // Initialize structure

    // printf("Student 1: ");
    // printf("Marks-%d ", student_1.marks);
    // printf("Grade-%c\n", student_1.grade);

    printf("Student 1: marks-%d Grade-%c\n", student_1.marks, student_1.grade);

    // struct student student_2;

    // student_2.marks = 73;
    // student_2.grade = 'B';

    struct student student_2 = {73, 'B'};

    // printf("Student 2: ");
    // printf("Marks-%d ", student_2.marks);
    // printf("Grade-%c\n", student_2.grade);

    printf("Student 2: marks-%d Grade-%c\n", student_2.marks, student_2.grade);

    return 0;
}