#include <stdio.h>
#include <string.h>

struct Car {
    char brand[10];
    int year;
};

// Function that takes a pointer to a Car struct and updates the year
void updateYear(struct Car *car_year) {
    car_year->year = 2025;
}

int main() {
    // struct Car car_details = {"Toyota", 2021};
    // struct Car *ptr = &car_details;

    // struct Car *ptr = {"Toyota", 2021}; // Invalid

    // Access members using the -> operator
    // printf("Brand: %s\n", ptr->brand); 
    // printf("Year: %d\n", ptr->year);

    struct Car car_details = {"Toyota", 2021};

    updateYear(&car_details);

    printf("Brand: %s\n", car_details.brand); 
    printf("Year: %d\n", car_details.year);

    return 0;
}