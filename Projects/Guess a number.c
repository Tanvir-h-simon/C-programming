#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX_ATTEMPTS 10
#define MIN_RANGE 1
#define MAX_RANGE 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char playerName[MAX_NAME_LENGTH];
    int gamesPlayed;
    int gamesWon;
    int totalAttempts;
    int bestScore;
} GameStats;

// Function prototypes
void displayWelcome(void);
void displayMenu(void);
int getValidInput(int min, int max);
void playGame(GameStats *stats);
void displayStats(const GameStats *stats);
void clearInputBuffer(void);
int isValidName(const char *name);
void getPlayerName(char *name);
void displayGameRules(void);

int main() {
    GameStats playerStats = {"Unknown", 0, 0, 0, MAX_ATTEMPTS + 1};
    int choice;
    
    // Initialize random number generator
    srand((unsigned int)time(NULL));
    
    displayWelcome();
    getPlayerName(playerStats.playerName);
    
    do {
        displayMenu();
        printf("\nEnter your choice: ");
        choice = getValidInput(1, 4);
        
        switch(choice) {
            case 1:
                playGame(&playerStats);
                break;
            case 2:
                displayStats(&playerStats);
                break;
            case 3:
                displayGameRules();
                break;
            case 4:
                printf("\nThanks for playing, %s! Goodbye!\n", playerStats.playerName);
                break;
        }
        
        if(choice != 4) {
            printf("\nPress Enter to continue...");
            clearInputBuffer();
            getchar();
        }
        
    } while(choice != 4);
    
    return 0;
}

void displayWelcome(void) {
    printf("=== WELCOME TO GUESS THE NUMBER GAME ===\n");
    printf("Try to guess the secret number between %d and %d!\n", MIN_RANGE, MAX_RANGE);
    printf("You have %d attempts to guess correctly.\n\n", MAX_ATTEMPTS);
}

void getPlayerName(char *name) {
    do {
        printf("Enter your name: ");
        fgets(name, MAX_NAME_LENGTH, stdin);
        
        // Remove newline character
        name[strcspn(name, "\n")] = 0;
        
        if(!isValidName(name)) {
            printf("Please enter a valid name (letters and spaces only, 1-49 characters).\n");
        }
    } while(!isValidName(name));
    
    printf("\nHello, %s! Let's start playing!\n", name);
}

int isValidName(const char *name) {
    if(strlen(name) == 0 || strlen(name) >= MAX_NAME_LENGTH) {
        return 0;
    }
    
    for(int i = 0; name[i] != '\0'; i++) {
        if(!isalpha(name[i]) && name[i] != ' ') {
            return 0;
        }
    }
    return 1;
}

void displayMenu(void) {
    printf("MAIN MENU\n");
    printf("1. Play Game\n");
    printf("2. View Statistics\n");
    printf("3. Game Rules\n");
    printf("4. Exit\n");
}

void displayGameRules(void) {
    printf("GAME RULES\n");
    printf("1. I will think of a number between %d and %d\n", MIN_RANGE, MAX_RANGE);
    printf("2. You have %d attempts to guess it\n", MAX_ATTEMPTS);
    printf("3. After each guess, I'll tell you if:\n");
    printf("   - Your guess is too high\n");
    printf("   - Your guess is too low\n");
    printf("   - You've guessed correctly!\n");
    printf("4. Try to guess in as few attempts as possible\n");
    printf("5. Your statistics are tracked across games\n");
}

int getValidInput(int min, int max) {
    int input;
    char buffer[100];
    
    while(1) {
        if(fgets(buffer, sizeof(buffer), stdin) != NULL) {
            if(sscanf(buffer, "%d", &input) == 1) {
                if(input >= min && input <= max) {
                    return input;
                } else {
                    printf("Please enter a number between %d and %d: ", min, max);
                }
            } else {
                printf("Invalid input. Please enter a number: ");
            }
        } else {
            printf("Error reading input. Please try again: ");
        }
    }
}

void playGame(GameStats *stats) {
    int secretNumber = rand() % (MAX_RANGE - MIN_RANGE + 1) + MIN_RANGE;
    int guess, attempts = 0;
    int gameWon = 0;

    printf("GAME STARTED!\n");
    printf("I'm thinking of a number between %d and %d...\n", MIN_RANGE, MAX_RANGE);
    printf("You have %d attempts. Good luck, %s!\n\n", MAX_ATTEMPTS, stats->playerName);
    
    while(attempts < MAX_ATTEMPTS && !gameWon) {
        attempts++;
        printf("Attempt %d/%d - Enter your guess: ", attempts, MAX_ATTEMPTS);
        guess = getValidInput(MIN_RANGE, MAX_RANGE);
        
        if(guess == secretNumber) {
            printf("\n*** CONGRATULATIONS! ***\n");
            printf("You guessed the number %d correctly in %d attempts!\n", secretNumber, attempts);
            gameWon = 1;
            
            // Update statistics
            stats->gamesWon++;
            if(attempts < stats->bestScore) {
                stats->bestScore = attempts;
                printf("*** NEW BEST SCORE! ***\n");
            }
        } else if(guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
            
            // Give hints based on how close they are
            if(secretNumber - guess <= 5) {
                printf("HINT: You're very close!\n");
            } else if(secretNumber - guess <= 15) {
                printf("HINT: You're getting warmer!\n");
            }
        } else {
            printf("Too high! Try a lower number.\n");
            
            // Give hints based on how close they are
            if(guess - secretNumber <= 5) {
                printf("HINT: You're very close!\n");
            } else if(guess - secretNumber <= 15) {
                printf("HINT: You're getting warmer!\n");
            }
        }
        
        if(!gameWon && attempts < MAX_ATTEMPTS) {
            printf("Remaining attempts: %d\n\n", MAX_ATTEMPTS - attempts);
        }
    }
    
    if(!gameWon) {
        printf("\n*** Game Over! *** You've used all %d attempts.\n", MAX_ATTEMPTS);
        printf("The secret number was: %d\n", secretNumber);
        printf("Better luck next time, %s!\n", stats->playerName);
    }
    
    // Update overall statistics
    stats->gamesPlayed++;
    stats->totalAttempts += attempts;
    
    printf("\n");
}

void displayStats(const GameStats *stats) {
    printf("PLAYER STATISTICS\n");
    printf("Player Name: %s\n", stats->playerName);
    printf("Games Played: %d\n", stats->gamesPlayed);
    printf("Games Won: %d\n", stats->gamesWon);
    
    if(stats->gamesPlayed > 0) {
        printf("Win Rate: %.1f%%\n", (float)stats->gamesWon / stats->gamesPlayed * 100);
        printf("Average Attempts: %.1f\n", (float)stats->totalAttempts / stats->gamesPlayed);
    }
    
    if(stats->gamesWon > 0 && stats->bestScore <= MAX_ATTEMPTS) {
        printf("Best Score: %d attempts\n", stats->bestScore);
    } else {
        printf("Best Score: Not set yet\n");
    }
    
    // Performance rating
    if(stats->gamesWon > 0) {
        float avgAttempts = (float)stats->totalAttempts / stats->gamesPlayed;
        printf("\nPerformance Rating: ");
        if(avgAttempts <= 3) {
            printf("*** EXCELLENT! ***\n");
        } else if(avgAttempts <= 5) {
            printf("** GREAT! **\n");
        } else if(avgAttempts <= 7) {
            printf("* GOOD! *\n");
        } else {
            printf("KEEP PRACTICING!\n");
        }
    }
    
    printf("\n");
}

void clearInputBuffer(void) {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}