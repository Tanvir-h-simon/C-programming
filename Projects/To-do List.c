#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 256
#define FILENAME "tasks.txt"

typedef struct {
    char description[MAX_TASK_LENGTH];
    int completed;
} Task;

typedef struct {
    Task tasks[MAX_TASKS];
    int count;
} TodoList;

// Function prototypes
void displayMenu();
void loadTasks(TodoList *list);
void saveTasks(TodoList *list);
void addTask(TodoList *list);
void viewTasks(TodoList *list);
void markTaskComplete(TodoList *list);
void deleteTask(TodoList *list);
void clearInputBuffer();

int main() {
    TodoList todoList;
    todoList.count = 0;
    int choice;
    
    // Load existing tasks from file
    loadTasks(&todoList);
    
    printf("=== Welcome to Your To-Do List Manager ===\n\n");
    
    while (1) {
        displayMenu();
        printf("Enter your choice (1-6): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n\n");
            clearInputBuffer();
            continue;
        }
        clearInputBuffer();
        
        switch (choice) {
            case 1:
                addTask(&todoList);
                break;
            case 2:
                viewTasks(&todoList);
                break;
            case 3:
                markTaskComplete(&todoList);
                break;
            case 4:
                deleteTask(&todoList);
                break;
            case 5:
                saveTasks(&todoList);
                printf("Tasks saved successfully!\n\n");
                break;
            case 6:
                saveTasks(&todoList);
                printf("Thank you for using To-Do List Manager!\n");
                exit(0);
            default:
                printf("Invalid choice! Please select 1-6.\n\n");
        }
    }
    
    return 0;
}

void displayMenu() {
    printf("TO-DO LIST MENU\n");
    printf("1. Add Task\n");
    printf("2. View All Tasks\n");
    printf("3. Mark Task as Complete\n");
    printf("4. Delete Task\n");
    printf("5. Save Tasks\n");
    printf("6. Exit\n");
}

void loadTasks(TodoList *list) {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        return; // File doesn't exist yet, start with empty list
    }
    
    list->count = 0;
    char line[MAX_TASK_LENGTH + 10];
    
    while (fgets(line, sizeof(line), file) && list->count < MAX_TASKS) {
        // Parse the line: format is "completed|description"
        char *token = strtok(line, "|");
        if (token != NULL) {
            list->tasks[list->count].completed = atoi(token);
            token = strtok(NULL, "\n");
            if (token != NULL) {
                strncpy(list->tasks[list->count].description, token, MAX_TASK_LENGTH - 1);
                list->tasks[list->count].description[MAX_TASK_LENGTH - 1] = '\0';
                list->count++;
            }
        }
    }
    
    fclose(file);
    printf("Loaded %d tasks from file.\n\n", list->count);
}

void saveTasks(TodoList *list) {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error: Could not save tasks to file!\n\n");
        return;
    }
    
    for (int i = 0; i < list->count; i++) {
        fprintf(file, "%d|%s\n", list->tasks[i].completed, list->tasks[i].description);
    }
    
    fclose(file);
}

void addTask(TodoList *list) {
    if (list->count >= MAX_TASKS) {
        printf("Error: Maximum number of tasks reached!\n\n");
        return;
    }
    
    printf("Enter task description: ");
    if (fgets(list->tasks[list->count].description, MAX_TASK_LENGTH, stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(list->tasks[list->count].description);
        if (len > 0 && list->tasks[list->count].description[len - 1] == '\n') {
            list->tasks[list->count].description[len - 1] = '\0';
        }
        
        list->tasks[list->count].completed = 0;
        list->count++;
        printf("Task added successfully!\n\n");
    } else {
        printf("Error reading task description!\n\n");
    }
}

void viewTasks(TodoList *list) {
    if (list->count == 0) {
        printf("No tasks found! Add some tasks first.\n\n");
        return;
    }
    
    printf("\n=== YOUR TASKS ===\n");
    for (int i = 0; i < list->count; i++) {
        printf("%d. [%s] %s\n", 
               i + 1, 
               list->tasks[i].completed ? "Completed" : " ", 
               list->tasks[i].description);
    }
    printf("\n");
}

void markTaskComplete(TodoList *list) {
    if (list->count == 0) {
        printf("No tasks available to mark as complete!\n\n");
        return;
    }
    
    viewTasks(list);
    
    printf("Enter task number to mark as complete: ");
    int taskNum;
    
    if (scanf("%d", &taskNum) != 1) {
        printf("Invalid input!\n\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer();
    
    if (taskNum < 1 || taskNum > list->count) {
        printf("Invalid task number!\n\n");
        return;
    }
    
    if (list->tasks[taskNum - 1].completed) {
        printf("Task is already completed!\n\n");
    } else {
        list->tasks[taskNum - 1].completed = 1;
        printf("Task marked as complete!\n\n");
    }
}

void deleteTask(TodoList *list) {
    if (list->count == 0) {
        printf("No tasks available to delete!\n\n");
        return;
    }
    
    viewTasks(list);
    
    printf("Enter task number to delete: ");
    int taskNum;
    
    if (scanf("%d", &taskNum) != 1) {
        printf("Invalid input!\n\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer();
    
    if (taskNum < 1 || taskNum > list->count) {
        printf("Invalid task number!\n\n");
        return;
    }
    
    // Shift all tasks after the deleted one
    for (int i = taskNum - 1; i < list->count - 1; i++) {
        list->tasks[i] = list->tasks[i + 1];
    }
    
    list->count--;
    printf("Task deleted successfully!\n\n");
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
