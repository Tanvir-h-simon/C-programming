#include <stdio.h>

int main() {
    
    // What is String?
    // char str[20] = "Tanvir Hossain";
    // printf("My name is: %s\n", str);

    // char str[8];
    // printf("Enter first name: ");
    // for (int i = 0; i < 8; i++) {
    //     scanf("%c", &str[i]);
    // }

    // for (int i = 0; i < 8; i++) {
    //     printf("%c", str[i]);
    // }

    char str[10];
    printf("Enter your name (Without Space): ");
    scanf("%s", str);
    printf("Your name is: %s\n", str);
    return 0;
}