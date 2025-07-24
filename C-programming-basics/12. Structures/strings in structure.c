#include <stdio.h>
// #include <string.h>

struct student {
    char name[20];
    int marks;
    char grade;
};

int main() {
    // struct student s1;
    // // s1.name = "Tanvir Hossain";
    // // In C, we cannot directly assign a string to a character array using the = (assignment) operator.
    // strcpy(s1.name, "Tanvir Hossain");
    // s1.marks = 89;
    // s1.grade = 'A';

    struct student s1 = {"Tanvir Hossain", 89, 'A'};

    printf("Name: %s ", s1.name);
    printf("Marks: %d ", s1.marks);
    printf("Grade: %c\n", s1.grade);

    return 0;
}