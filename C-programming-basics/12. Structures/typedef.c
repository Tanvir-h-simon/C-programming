#include <stdio.h>

// struct Car {
//     char brand[10];
//     int year;
// };

// typedef struct Car {
typedef struct {
    char brand[10];
    int year;
} Car; // Alias name

int main() {
    // struct Car myCar = {"Toyota", 2021}; // Repetitive

    Car myCar = {"Toyota", 2021};

    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);

    return 0;
}