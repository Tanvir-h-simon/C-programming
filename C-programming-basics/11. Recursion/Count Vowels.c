#include <stdio.h>

// int main() {
//     char str[201];
//     fgets(str, 201, stdin); // stdin = standard input
//     int count = 0;
//     for (int i = 0; str[i]  != '\0'; i++) {
//         if (str[i] == 'a'|| str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || 
//             str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
//                 count++;
//         }
//     }   
//     printf("%d", count);
//     return 0;
// }

int count_vowels(char str[], int i) {

    if (str[i] == '\0') {
        return 0; // End of string
    }

    int count = count_vowels(str, i + 1);

    if (str[i] == 'a'|| str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || 
        str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
        return count + 1;  
    } else {
        return count;
    }
}

int main() {
    char str[201];
    fgets(str, 201, stdin); // stdin = standard input
    int total_count = count_vowels(str, 0);
    printf("%d", total_count);
    return 0;
}