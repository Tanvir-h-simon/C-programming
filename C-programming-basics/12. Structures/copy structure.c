#include <stdio.h>

struct student {
    char name[20];
    int marks;
    char grade;
};

int main() {
    struct student s1 = {"Tanvir Hossain", 89, 'A'};
    struct student s2;
    
    s2 = s1; // Copy all member values from s1 to s2 

    // Modify values
    s2.marks = 65;
    s2.grade = 'C';

    // printf("Name: %s ", s1.name);
    // printf("Marks: %d ", s1.marks);
    // printf("Grade: %c\n", s1.grade);

    printf("Name: %s ", s2.name);
    printf("Marks: %d ", s2.marks);
    printf("Grade: %c\n", s2.grade);
    return 0;
}