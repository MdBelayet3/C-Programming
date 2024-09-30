#include <stdio.h>

// Constants
#define MAX_STUDENTS 100
#define PASS_THRESHOLD 60

// Structure to store student data
struct Student {
    char name[50];
    int score;
    char status[5]; // "Pass" or "Fail"
};

// Function to input student data
void inputStudents(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the test score for %s: ", students[i].name);
        scanf("%d", &students[i].score);

        // Determine pass/fail status
        if (students[i].score >= PASS_THRESHOLD) {
            strcpy(students[i].status, "Pass");
        } else {
            strcpy(students[i].status, "Fail");
        }
    }
}

// Function to calculate and display the average score
void calculateAverage(struct Student students[], int numStudents) {
    int totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += students[i].score;
    }
    float average = (float)totalScore / numStudents;
    printf("Average test score: %.2f\n", average);
}

// Function to generate a report
void generateReport(struct Student students[], int numStudents) {
    printf("Student Report:\n");
    printf("Name\tTest Score\tStatus\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%s\t%d\t\t%s\n", students[i].name, students[i].score, students[i].status);
    }
}

int main() {
    int numStudents;
    struct Student students[MAX_STUDENTS];

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Number of students exceeds the maximum limit.\n");
        return 1;
    }

    inputStudents(students, numStudents);
    calculateAverage(students, numStudents);
    generateReport(students, numStudents);

    return 0;
}


