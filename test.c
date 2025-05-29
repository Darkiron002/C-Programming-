#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Trainer structure
typedef struct {
    int id;
    char name[50];
    char department[30];
    float salary;
    char position[30];
    char dateOfJoining[15]; // Format: DD-MM-YYYY
} Trainer;

Trainer trainers[MAX];
int count = 0;

// Function prototypes
void createRecord();
void readRecords();
void modifyRecord();
void deleteRecord();
void menu();

int main() {
    menu();
    return 0;
}

// Display menu
void menu() {
    int choice;
    while (1) {
        printf("\n====== Trainer Database Menu ======\n");
        printf("1. Create New Record\n");
        printf("2. Read/Display Records\n");
        printf("3. Modify a Record\n");
        printf("4. Delete a Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline

        switch (choice) {
            case 1: createRecord(); break;
            case 2: readRecords(); break;
            case 3: modifyRecord(); break;
            case 4: deleteRecord(); break;
            case 5: exit(0);
            default: printf("Invalid choice! Please try again.\n");
        }
    }
}

// Create new trainer record
void createRecord() {
    if (count >= MAX) {
        printf("Database full!\n");
        return;
    }

    printf("\nEnter Trainer ID: ");
    scanf("%d", &trainers[count].id);
    getchar();
    printf("Enter Trainer Name: ");
    fgets(trainers[count].name, sizeof(trainers[count].name), stdin);
    strtok(trainers[count].name, "\n");

    printf("Enter Department Name: ");
    fgets(trainers[count].department, sizeof(trainers[count].department), stdin);
    strtok(trainers[count].department, "\n");

    printf("Enter Salary: ");
    scanf("%f", &trainers[count].salary);
    getchar();

    printf("Enter Position: ");
    fgets(trainers[count].position, sizeof(trainers[count].position), stdin);
    strtok(trainers[count].position, "\n");

    printf("Enter Date of Joining (DD-MM-YYYY): ");
    fgets(trainers[count].dateOfJoining, sizeof(trainers[count].dateOfJoining), stdin);
    strtok(trainers[count].dateOfJoining, "\n");

    count++;
    printf("Record added successfully.\n");
}

// Read/display records
void readRecords() {
    if (count == 0) {
        printf("No records to display.\n");
        return;
    }

    printf("\n---- Trainer Records ----\n");
    for (int i = 0; i < count; i++) {
        printf("\nRecord #%d\n", i + 1);
        printf("ID: %d\n", trainers[i].id);
        printf("Name: %s\n", trainers[i].name);
        printf("Department: %s\n", trainers[i].department);
        printf("Salary: %.2f\n", trainers[i].salary);
        printf("Position: %s\n", trainers[i].position);
        printf("Date of Joining: %s\n", trainers[i].dateOfJoining);
    }
}

// Modify existing record
void modifyRecord() {
    int id, found = 0;
    printf("\nEnter Trainer ID to modify: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (trainers[i].id == id) {
            printf("Editing record for %s...\n", trainers[i].name);

            printf("Enter new Name: ");
            fgets(trainers[i].name, sizeof(trainers[i].name), stdin);
            strtok(trainers[i].name, "\n");

            printf("Enter new Department: ");
            fgets(trainers[i].department, sizeof(trainers[i].department), stdin);
            strtok(trainers[i].department, "\n");

            printf("Enter new Salary: ");
            scanf("%f", &trainers[i].salary);
            getchar();

            printf("Enter new Position: ");
            fgets(trainers[i].position, sizeof(trainers[i].position), stdin);
            strtok(trainers[i].position, "\n");

            printf("Enter new Date of Joining: ");
            fgets(trainers[i].dateOfJoining, sizeof(trainers[i].dateOfJoining), stdin);
            strtok(trainers[i].dateOfJoining, "\n");

            printf("Record updated.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Trainer with ID %d not found.\n", id);
    }
}

// Delete record
void deleteRecord() {
    int id, found = 0;
    printf("\nEnter Trainer ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (trainers[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                trainers[j] = trainers[j + 1];
            }
            count--;
            found = 1;
            printf("Record deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Trainer with ID %d not found.\n", id);
    }
}
