#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_QUESTION_LENGTH 200
#define MAX_OPTION_LENGTH 50
#define MAX_QUESTIONS 50
#define NUM_OPTIONS 4

typedef struct {
    char question[MAX_QUESTION_LENGTH];
    char options[NUM_OPTIONS][MAX_OPTION_LENGTH];
    int correct_answer; // 0-3 for options A-D
    char category[50];
} Question;

typedef struct {
    char name[50];
    int score;
    int total_questions;
} Player;

// Function prototypes
void initializeQuestions(Question questions[], int *num_questions);
void displayMenu();
void playQuiz(Question questions[], int num_questions, Player *player);
void displayQuestion(Question q, int question_num);
int getPlayerAnswer();
void displayResults(Player player);
void displayLeaderboard();
void clearInputBuffer();
void toUpperCase(char *str);

int main() {
    Question questions[MAX_QUESTIONS];
    int num_questions = 0;
    Player player;
    int choice;
    
    printf("=== WELCOME TO THE QUIZ GAME! ===\n");
    
    printf("Enter your name: ");
    fgets(player.name, sizeof(player.name), stdin);
    player.name[strcspn(player.name, "\n")] = 0; // Remove newline
    
    initializeQuestions(questions, &num_questions);
    
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();
        
        switch(choice) {
            case 1:
                playQuiz(questions, num_questions, &player);
                break;
            case 2:
                printf("\nThanks for playing, %s!\n", player.name);
                printf("Final Score: %d/%d\n", player.score, player.total_questions);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 2);
    
    return 0;
}

void initializeQuestions(Question questions[], int *num_questions) {
    // Science Questions
    strcpy(questions[0].question, "What is the chemical symbol for water?");
    strcpy(questions[0].options[0], "H2O");
    strcpy(questions[0].options[1], "CO2");
    strcpy(questions[0].options[2], "NaCl");
    strcpy(questions[0].options[3], "O2");
    questions[0].correct_answer = 0;
    strcpy(questions[0].category, "Science");
    
    strcpy(questions[1].question, "Which planet is known as the Red Planet?");
    strcpy(questions[1].options[0], "Venus");
    strcpy(questions[1].options[1], "Mars");
    strcpy(questions[1].options[2], "Jupiter");
    strcpy(questions[1].options[3], "Saturn");
    questions[1].correct_answer = 1;
    strcpy(questions[1].category, "Science");
    
    strcpy(questions[2].question, "What is the speed of light in vacuum?");
    strcpy(questions[2].options[0], "300,000 km/s");
    strcpy(questions[2].options[1], "150,000 km/s");
    strcpy(questions[2].options[2], "299,792,458 m/s");
    strcpy(questions[2].options[3], "186,000 miles/s");
    questions[2].correct_answer = 2;
    strcpy(questions[2].category, "Science");
    
    // History Questions
    strcpy(questions[3].question, "In which year did World War II end?");
    strcpy(questions[3].options[0], "1944");
    strcpy(questions[3].options[1], "1945");
    strcpy(questions[3].options[2], "1946");
    strcpy(questions[3].options[3], "1943");
    questions[3].correct_answer = 1;
    strcpy(questions[3].category, "History");
    
    strcpy(questions[4].question, "Who was the first person to walk on the moon?");
    strcpy(questions[4].options[0], "Buzz Aldrin");
    strcpy(questions[4].options[1], "Neil Armstrong");
    strcpy(questions[4].options[2], "John Glenn");
    strcpy(questions[4].options[3], "Alan Shepard");
    questions[4].correct_answer = 1;
    strcpy(questions[4].category, "History");
    
    // Geography Questions
    strcpy(questions[5].question, "What is the capital of Australia?");
    strcpy(questions[5].options[0], "Sydney");
    strcpy(questions[5].options[1], "Melbourne");
    strcpy(questions[5].options[2], "Canberra");
    strcpy(questions[5].options[3], "Perth");
    questions[5].correct_answer = 2;
    strcpy(questions[5].category, "Geography");
    
    strcpy(questions[6].question, "Which is the longest river in the world?");
    strcpy(questions[6].options[0], "Amazon River");
    strcpy(questions[6].options[1], "Nile River");
    strcpy(questions[6].options[2], "Mississippi River");
    strcpy(questions[6].options[3], "Yangtze River");
    questions[6].correct_answer = 1;
    strcpy(questions[6].category, "Geography");
    
    // Math Questions
    strcpy(questions[7].question, "What is the value of pi approximately?");
    strcpy(questions[7].options[0], "3.14159");
    strcpy(questions[7].options[1], "2.71828");
    strcpy(questions[7].options[2], "1.41421");
    strcpy(questions[7].options[3], "2.30259");
    questions[7].correct_answer = 0;
    strcpy(questions[7].category, "Mathematics");
    
    strcpy(questions[8].question, "What is 15% of 200?");
    strcpy(questions[8].options[0], "25");
    strcpy(questions[8].options[1], "30");
    strcpy(questions[8].options[2], "35");
    strcpy(questions[8].options[3], "40");
    questions[8].correct_answer = 1;
    strcpy(questions[8].category, "Mathematics");
    
    strcpy(questions[9].question, "In programming, what does 'CPU' stand for?");
    strcpy(questions[9].options[0], "Computer Processing Unit");
    strcpy(questions[9].options[1], "Central Processing Unit");
    strcpy(questions[9].options[2], "Core Processing Unit");
    strcpy(questions[9].options[3], "Central Program Unit");
    questions[9].correct_answer = 1;
    strcpy(questions[9].category, "Technology");
    
    *num_questions = 10;
}

void displayMenu() {
    printf("QUIZ MENU\n");
    printf("1. Start Quiz\n");
    printf("2. Exit Game\n");
}

void playQuiz(Question questions[], int num_questions, Player *player) {
    int score = 0;
    int user_answer;
    
    printf("QUIZ STARTED!\n");
    printf("Instructions:\n");
    printf("- Answer each question by entering A, B, C, or D\n");
    printf("- You can quit anytime by entering 'Q'\n");
    printf("- Good luck!\n\n");
    
    // Shuffle questions for variety
    srand(time(NULL));
    for(int i = 0; i < num_questions; i++) {
        int j = rand() % num_questions;
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
    
    for(int i = 0; i < num_questions; i++) {
        displayQuestion(questions[i], i + 1);
        
        user_answer = getPlayerAnswer();
        
        if(user_answer == -1) { // User chose to quit
            printf("\nQuiz ended early. Thanks for playing!\n");
            break;
        }
        
        if(user_answer == questions[i].correct_answer) {
            printf("Correct! Well done!\n");
            score++;
        } else {
            printf("Incorrect. The correct answer was %c) %s\n", 
                   'A' + questions[i].correct_answer, 
                   questions[i].options[questions[i].correct_answer]);
        }
        
        printf("Current Score: %d/%d\n", score, i + 1);
        
        if(i < num_questions - 1) {
            printf("\nPress Enter to continue to next question...");
            getchar();
        }
    }
    
    player->score = score;
    player->total_questions = num_questions;
    displayResults(*player);
}

void displayQuestion(Question q, int question_num) {
    printf("Category: %s\n", q.category);
    printf("Question %d: %s\n\n", question_num, q.question);
    
    for(int i = 0; i < NUM_OPTIONS; i++) {
        printf("%c) %s\n", 'A' + i, q.options[i]);
    }
    printf("\nYour answer (A/B/C/D or Q to quit): ");
}

int getPlayerAnswer() {
    char input[10];
    fgets(input, sizeof(input), stdin);
    
    // Convert to uppercase
    toUpperCase(input);
    
    if(input[0] == 'Q') {
        return -1; // Quit signal
    }
    
    if(input[0] >= 'A' && input[0] <= 'D') {
        return input[0] - 'A'; // Convert A,B,C,D to 0,1,2,3
    }
    
    printf("Invalid input! Please enter A, B, C, D, or Q: ");
    return getPlayerAnswer(); // Recursive call for invalid input
}

void displayResults(Player player) {
    double percentage = ((double)player.score / player.total_questions) * 100;

    printf("QUIZ RESULTS\n");
    printf("Player: %s\n", player.name);
    printf("Score: %d out of %d\n", player.score, player.total_questions);
    printf("Percentage: %.1f%%\n", percentage);
    
    printf("\nPerformance Rating: ");
    if(percentage >= 90) {
        printf("EXCELLENT!\n");
    } else if(percentage >= 80) {
        printf("VERY GOOD!\n");
    } else if(percentage >= 70) {
        printf("GOOD!\n");
    } else if(percentage >= 60) {
        printf("FAIR\n");
    } else {
        printf("NEEDS IMPROVEMENT\n");
    }
    
    printf("\n");
}

void clearInputBuffer() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void toUpperCase(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}