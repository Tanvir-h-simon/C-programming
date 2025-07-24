#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int roll;
    float cgpa;
};


int main() {
    struct student arr[5];
    strcpy(arr[0].name, "Mohammed");
    arr[0].roll = 1;
    arr[0].cgpa = 3.5;

    strcpy(arr[1].name, "Ahmed");
    arr[1].roll = 2;
    arr[1].cgpa = 3.4;

    
    strcpy(arr[2].name, "Abdur Rahman");
    arr[2].roll = 3;
    arr[2].cgpa = 3.6;

    
    strcpy(arr[3].name, "Abdullah");
    arr[3].roll = 4;
    arr[3].cgpa = 3.7;

    
    strcpy(arr[4].name, "Umar");
    arr[4].roll = 5;
    arr[4].cgpa = 3.8;

    printf("Name: %s  Roll-%d  Cgpa-%.2f\n", arr[0].name, arr[0].roll, arr[0].cgpa);
    printf("Name: %s  Roll-%d  Cgpa-%.2f\n", arr[1].name, arr[1].roll, arr[1].cgpa);
    printf("Name: %s  Roll-%d  Cgpa-%.2f\n", arr[2].name, arr[2].roll, arr[2].cgpa);
    printf("Name: %s  Roll-%d  Cgpa-%.2f\n", arr[3].name, arr[3].roll, arr[3].cgpa);
    printf("Name: %s  Roll-%d  Cgpa-%.2f\n", arr[4].name, arr[4].roll, arr[4].cgpa);

    return 0;
}