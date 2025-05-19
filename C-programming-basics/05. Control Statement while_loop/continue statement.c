#include <stdio.h>

int main() {
    int count, score, total;
    count = 0; // Initialize count
    total = 0; // Initialize total

    while (count < 4) {
        printf("Enter your score: ");
        scanf("%d", &score);

        // Check if score is out of range
        if (score < 0 || score > 100) {
            printf("Invalid score. Score must be between 0 and 100.\n");
            continue; // Skip adding the score to total and loop again
        }

        total += score; // Add valid score to total
        count++; // Increment count after a valid score is entered

        printf("Total score so far is: %d\n\n", total);
    }

    printf("Final total score is: %d\n", total);

    return 0;
}
