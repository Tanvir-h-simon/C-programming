#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LEN 50
#define MAX_PHONE_LEN 20
#define MAX_EMAIL_LEN 50
#define MAX_ADDRESS_LEN 100
#define FILENAME "contacts.txt"

typedef struct {
    char name[MAX_NAME_LEN];
    char phone[MAX_PHONE_LEN];
    char email[MAX_EMAIL_LEN];
    char address[MAX_ADDRESS_LEN];
} Contact;

Contact addressBook[MAX_CONTACTS];
int contactCount = 0;

// Function prototypes
void displayMenu();
void addContact();
void viewAllContacts();
void searchContact();
void editContact();
void deleteContact();
void saveToFile();
void loadFromFile();
void clearInputBuffer();
int isValidEmail(const char* email);
int isValidPhone(const char* phone);
void toLowerCase(char* str);

int main() {
    int choice;
    
    printf("=== WELCOME TO ADDRESS BOOK ===\n\n");
    
    // Load existing contacts from file
    loadFromFile();
    
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clearInputBuffer();
            continue;
        }
        clearInputBuffer();
        
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewAllContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                editContact();
                break;
            case 5:
                deleteContact();
                break;
            case 6:
                saveToFile();
                printf("Data saved successfully!\n");
                printf("Thank you for using Address Book!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
        
        printf("\nPress Enter to continue...");
        getchar();
    }
    
    return 0;
}

void displayMenu() {
    printf("\nADDRESS BOOK MENU\n");
    printf("1. Add New Contact\n");
    printf("2. View All Contacts\n");
    printf("3. Search Contact\n");
    printf("4. Edit Contact\n");
    printf("5. Delete Contact\n");
    printf("6. Save and Exit\n");
}

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Address book is full! Cannot add more contacts.\n");
        return;
    }
    
    Contact newContact;
    
    printf("\nADD NEW CONTACT\n");
    
    // Get name
    printf("Enter name: ");
    fgets(newContact.name, MAX_NAME_LEN, stdin);
    newContact.name[strcspn(newContact.name, "\n")] = 0; // Remove newline
    
    if (strlen(newContact.name) == 0) {
        printf("Name cannot be empty!\n");
        return;
    }
    
    // Get phone
    do {
        printf("Enter phone number: ");
        fgets(newContact.phone, MAX_PHONE_LEN, stdin);
        newContact.phone[strcspn(newContact.phone, "\n")] = 0;
        
        if (!isValidPhone(newContact.phone)) {
            printf("Invalid phone number! Please use format like: +1-234-567-8900 or 1234567890\n");
        }
    } while (!isValidPhone(newContact.phone));
    
    // Get email
    printf("Enter email (optional, press Enter to skip): ");
    fgets(newContact.email, MAX_EMAIL_LEN, stdin);
    newContact.email[strcspn(newContact.email, "\n")] = 0;

    while (strlen(newContact.email) > 0 && !isValidEmail(newContact.email)) {
        printf("Invalid email format! Please enter a valid email or press Enter to skip: ");
        fgets(newContact.email, MAX_EMAIL_LEN, stdin);
        newContact.email[strcspn(newContact.email, "\n")] = 0;
    }
    
    // Get address
    printf("Enter address: ");
    fgets(newContact.address, MAX_ADDRESS_LEN, stdin);
    newContact.address[strcspn(newContact.address, "\n")] = 0;
    
    // Add contact to address book
    addressBook[contactCount] = newContact;
    contactCount++;
    
    printf("Contact added successfully!\n");
}

void viewAllContacts() {
    if (contactCount == 0) {
        printf("\nNo contacts found in address book.\n");
        return;
    }
    
    printf("\nALL CONTACTS\n");
    printf("%-4s %-20s %-20s %-25s %-30s\n", "No.", "Name", "Phone", "Email", "Address");

    for (int i = 0; i < contactCount; i++) {
        char numStr[12];
        snprintf(numStr, sizeof(numStr), "%d.", i + 1);
    
        printf("%-4s %-20s %-20s %-25s %-30s\n",
           numStr,
           addressBook[i].name,
           addressBook[i].phone,
           addressBook[i].email,
           addressBook[i].address);
    }

    printf("\nTotal contacts: %d\n", contactCount);
}

void searchContact() {
    if (contactCount == 0) {
        printf("\nNo contacts found in address book.\n");
        return;
    }
    
    char searchTerm[MAX_NAME_LEN];
    char lowerSearchTerm[MAX_NAME_LEN];
    char lowerName[MAX_NAME_LEN];
    int found = 0;
    
    printf("\nSEARCH CONTACT\n");
    printf("Enter name to search: ");
    fgets(searchTerm, MAX_NAME_LEN, stdin);
    searchTerm[strcspn(searchTerm, "\n")] = 0;
    
    strcpy(lowerSearchTerm, searchTerm);
    toLowerCase(lowerSearchTerm);
    
    printf("\nSEARCH RESULTS\n");
    
    for (int i = 0; i < contactCount; i++) {
        strcpy(lowerName, addressBook[i].name);
        toLowerCase(lowerName);
        
        if (strstr(lowerName, lowerSearchTerm) != NULL) {
            if (!found) {
                printf("%-4s %-20s %-15s %-25s %-30s\n", "No.", "Name", "Phone", "Email", "Address");
                found = 1;
            }
            printf("%-4d %-20s %-15s %-25s %-30s\n", 
                   i + 1,
                   addressBook[i].name,
                   addressBook[i].phone,
                   addressBook[i].email,
                   addressBook[i].address);
        }
    }
    
    if (!found) {
        printf("No contacts found matching '%s'\n", searchTerm);
    }
}

void editContact() {
    if (contactCount == 0) {
        printf("\nNo contacts found in address book.\n");
        return;
    }
    
    int contactNum;
    printf("\nEDIT CONTACT\n");
    viewAllContacts();
    
    printf("\nEnter contact number to edit (1-%d): ", contactCount);
    if (scanf("%d", &contactNum) != 1 || contactNum < 1 || contactNum > contactCount) {
        printf("Invalid contact number!\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer();
    
    int index = contactNum - 1;
    Contact* contact = &addressBook[index];
    
    printf("\nEditing contact: %s\n", contact->name);
    printf("(Press Enter to keep current value)\n\n");
    
    // Edit name
    printf("Current name: %s\n", contact->name);
    printf("New name: ");
    char temp[MAX_NAME_LEN];
    fgets(temp, MAX_NAME_LEN, stdin);
    temp[strcspn(temp, "\n")] = 0;
    if (strlen(temp) > 0) {
        strcpy(contact->name, temp);
    }
    
    // Edit phone
    printf("Current phone: %s\n", contact->phone);
    printf("New phone: ");
    fgets(temp, MAX_PHONE_LEN, stdin);
    temp[strcspn(temp, "\n")] = 0;
    if (strlen(temp) > 0) {
        if (isValidPhone(temp)) {
            strcpy(contact->phone, temp);
        } else {
            printf("Invalid phone number! Keeping current value.\n");
        }
    }
    
    // Edit email
    printf("Current email: %s\n", contact->email);
    printf("New email: ");
    fgets(temp, MAX_EMAIL_LEN, stdin);
    temp[strcspn(temp, "\n")] = 0;
    if (strlen(temp) > 0) {
        if (isValidEmail(temp)) {
            strcpy(contact->email, temp);
        } else {
            printf("Invalid email format! Keeping current value.\n");
        }
    }
    
    // Edit address
    printf("Current address: %s\n", contact->address);
    printf("New address: ");
    fgets(temp, MAX_ADDRESS_LEN, stdin);
    temp[strcspn(temp, "\n")] = 0;
    if (strlen(temp) > 0) {
        strcpy(contact->address, temp);
    }
    
    printf("Contact updated successfully!\n");
}

void deleteContact() {
    if (contactCount == 0) {
        printf("\nNo contacts found in address book.\n");
        return;
    }
    
    int contactNum;
    char confirm;
    
    printf("\nDELETE CONTACT\n");
    viewAllContacts();
    
    printf("\nEnter contact number to delete (1-%d): ", contactCount);
    if (scanf("%d", &contactNum) != 1 || contactNum < 1 || contactNum > contactCount) {
        printf("Invalid contact number!\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer();
    
    int index = contactNum - 1;
    
    printf("\nContact to delete:\n");
    printf("Name: %s\n", addressBook[index].name);
    printf("Phone: %s\n", addressBook[index].phone);
    printf("Email: %s\n", addressBook[index].email);
    printf("Address: %s\n", addressBook[index].address);
    
    printf("\nAre you sure you want to delete this contact? (y/n): ");
    scanf("%c", &confirm);
    clearInputBuffer();
    
    if (confirm == 'y' || confirm == 'Y') {
        // Shift all contacts after the deleted one
        for (int i = index; i < contactCount - 1; i++) {
            addressBook[i] = addressBook[i + 1];
        }
        contactCount--;
        printf("Contact deleted successfully!\n");
    } else {
        printf("Deletion cancelled.\n");
    }
}

void saveToFile() {
    FILE* file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error: Cannot save to file!\n");
        return;
    }
    
    fprintf(file, "%d\n", contactCount);
    for (int i = 0; i < contactCount; i++) {
        fprintf(file, "%s\n%s\n%s\n%s\n",
                addressBook[i].name,
                addressBook[i].phone,
                addressBook[i].email,
                addressBook[i].address);
    }
    
    fclose(file);
}

void loadFromFile() {
    FILE* file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("No existing data file found. Starting with empty address book.\n");
        return;
    }
    
    if (fscanf(file, "%d\n", &contactCount) == 1) {
        for (int i = 0; i < contactCount && i < MAX_CONTACTS; i++) {
            fgets(addressBook[i].name, MAX_NAME_LEN, file);
            addressBook[i].name[strcspn(addressBook[i].name, "\n")] = 0;
            
            fgets(addressBook[i].phone, MAX_PHONE_LEN, file);
            addressBook[i].phone[strcspn(addressBook[i].phone, "\n")] = 0;
            
            fgets(addressBook[i].email, MAX_EMAIL_LEN, file);
            addressBook[i].email[strcspn(addressBook[i].email, "\n")] = 0;
            
            fgets(addressBook[i].address, MAX_ADDRESS_LEN, file);
            addressBook[i].address[strcspn(addressBook[i].address, "\n")] = 0;
        }
        printf("Loaded %d contacts from file.\n", contactCount);
    }
    
    fclose(file);
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int isValidEmail(const char* email) {
    // Empty email is allowed
    if (strlen(email) == 0) return 1; 
    
    int atCount = 0;
    int dotAfterAt = 0;
    int atPos = -1;
    int emailLen = strlen(email);
    
    // Basic check: must have at least 3 characters (a@b)
    if (emailLen < 3) return 0;
    
    for (int i = 0; email[i]; i++) {
        if (email[i] == '@') {
            atCount++;
            atPos = i;
        } else if (email[i] == '.' && i > atPos && atPos != -1) {
            dotAfterAt = 1;
        }
    }
    
    // Must have exactly one @ sign, @ not at start/end, dot after @, and reasonable length after @
    return (atCount == 1 && dotAfterAt && atPos > 0 && atPos < emailLen - 2);
}

int isValidPhone(const char* phone) {
    if (strlen(phone) < 10 || strlen(phone) > 20) return 0;
    
    int digitCount = 0;
    int hasPlus = 0;
    
    for (int i = 0; phone[i]; i++) {
        if (isdigit(phone[i])) {
            digitCount++;
        } else if (phone[i] == '+') {
            // + sign should only be at the beginning
            if (i != 0 || hasPlus) return 0;
            hasPlus = 1;
        } else if (phone[i] != '-' && phone[i] != '(' && phone[i] != ')' && phone[i] != ' ') {
            return 0;
        }
    }
    
    // Should have at least 10 digits for a valid phone number
    return (digitCount >= 10 && digitCount <= 15);
}

void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}