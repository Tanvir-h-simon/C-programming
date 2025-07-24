#include <stdio.h>

// Function to determine and print grade based on average using university grading scheme
void printGrade(float average) {
    if (average >= 90.00) {
        printf("A+ (Distinction) - Grade Point: 4.00\n");
    } else if (average >= 80.00) {
        printf("A (Distinction) - Grade Point: 4.00\n");
    } else if (average >= 75.00) {
        printf("A- (Distinction) - Grade Point: 3.70\n");
    } else if (average >= 70.00) {
        printf("B+ (Good) - Grade Point: 3.30\n");
    } else if (average >= 65.00) {
        printf("B (Good) - Grade Point: 3.00\n");
    } else if (average >= 60.00) {
        printf("B- (Good) - Grade Point: 2.70\n");
    } else if (average >= 55.00) {
        printf("C+ (Pass) - Grade Point: 2.30\n");
    } else if (average >= 50.00) {
        printf("C (Pass) - Grade Point: 2.00\n");
    } else if (average >= 45.00) {
        printf("C- (Fail) - Grade Point: 1.70\n");
    } else if (average >= 40.00) {
        printf("D+ (Fail) - Grade Point: 1.30\n");
    } else if (average >= 35.00) {
        printf("D (Fail) - Grade Point: 1.00\n");
    } else {
        printf("F (Fail) - Grade Point: 0.00\n");
    }
}

int main() {
    int numSubjects;
    float total = 0.0;
    
    printf("Student Grade Calculator\n");
    
    // Get number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    
    if (numSubjects <= 0) {
        printf("Error: Number of subjects must be greater than 0.\n");
        return 1;
    }
    
    // Get marks for each subject
    printf("\nEnter the marks for %d subjects:\n", numSubjects);
    for (int i = 1; i <= numSubjects; i++) {
        float marks;
        printf("Subject %d: ", i);
        scanf("%f", &marks);
        
        if (marks < 0 || marks > 100) {
            printf("Warning: Grade %.2f is outside normal range (0-100)\n", marks);
        }
        
        total += marks; // total marks
    }
    
    float average = total / numSubjects; // Calculate average marks
    
    printf("\nResults:\n");
    printf("Number of Subjects: %d\n", numSubjects);
    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);
    
    // Grade classification using function
    printf("Grade: ");
    printGrade(average);
    
    return 0;
}