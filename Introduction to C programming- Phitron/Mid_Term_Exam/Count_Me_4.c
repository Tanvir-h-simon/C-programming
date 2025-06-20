#include <stdio.h>

int main() {
    char S[10000];
    scanf("%s", S);
    
    int frequency[26] = {0}; // Initial frequency array: [0, 0, 0, 0, 0, 0, ..., 0]

    // for (int i = 0; S[i] != '\0'; i++) {
    //     int index;
    //     switch(S[i]) {
    //         case 'a': index = 0; break;
    //         case 'b': index = 1; break;
    //         case 'c': index = 2; break;
    //         // ... continue for all letters
    //         case 'z': index = 25; break;
    //     }
    //     frequency[index]++;
    // }

    for (int i = 0; S[i] != '\0'; i++) {
        frequency[S[i] - 'a']++;
    }

    // Print non-zero frequencies
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            // Convert index back to alphabet by adding 'a'
            printf("%c - %d\n", i + 'a', frequency[i]);
        }
    }
    return 0;
}