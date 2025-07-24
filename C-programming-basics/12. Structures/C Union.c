#include <stdio.h>
#include <string.h>

union student {
    char name[20]; // 20 bytes
    char grade;
    int marks;
};

int main() {
    union student u1;
    // strcpy(u1.name, "Tanvir Hossain");
    // u1.marks = 89;
    // u1.grade = 'A';

    // printf("Name: %s\n", u1.name); // Stores "Tanvir Hossain" in shared memory
    // printf("Marks: %d\n", u1.marks); // Overwrites first 4 bytes of the union memory
    // printf("Grade: %c\n", u1.grade); // Overwrites the first byte of memory. Now only grade has valid content. The rest is garbage.

    strcpy(u1.name, "Tanvir");
    printf("Name: %s\n", u1.name);

    u1.marks = 89;
    printf("Marks: %d\n", u1.marks);

    // printf("Size of union: %zu bytes\n", sizeof(u1));
    
    u1.grade = 'A';
    printf("Grade: %c\n", u1.grade);

    printf("Size of union: %zu bytes\n", sizeof(u1)); 
    // Since the largest member is 20 bytes, the entire union will also be 20 bytes.
    // If it was a struct instead, the size would be 20 + 4 + 1 = 25 bytes

    return 0;
}