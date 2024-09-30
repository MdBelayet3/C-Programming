#include <stdio.h>

#define MAX_STUDENTS 50

// Function prototypes
int getNumberOfStudents();
void inputStudentData(int numStudents, char names[][50], int scores[]);
float calculateAverage(int numStudents, int scores[]);
void determinePassFail(int numStudents, int scores[], int passingThreshold, char passFailStatus[]);
void displayReport(int numStudents, char names[][50], int scores[], char passFailStatus[]);

int main() {
    char names[MAX_STUDENTS][50];
    int scores[MAX_STUDENTS];
    char passFailStatus[MAX_STUDENTS];
    int numStudents, passingThreshold;

    // Get the number of students
    numStudents = getNumberOfStudents();

    // Get passing threshold
    printf("Enter passing threshold: ");
    scanf("%d", &passingThreshold);

    // Input student data
    inputStudentData(numStudents, names, scores);

    // Calculate and display the average score
    float average = calculateAverage(numStudents, scores);
    printf("\nAverage Score: %.2f\n", average);

    // Determine pass/fail status
    determinePassFail(numStudents, scores, passingThreshold, passFailStatus);

    // Display the report
    displayReport(numStudents, names, scores, passFailStatus);

    return 0;
}

// Function to get the number of students from the user
int getNumberOfStudents() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    return numStudents;
}

// Function to input student names and scores
void inputStudentData(int numStudents, char names[][50], int scores[]) {
    for (int i = 0; i < numStudents; ++i) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter score for %s: ", names[i]);
        scanf("%d", &scores[i]);
    }
}

// Function to calculate and display the average score
float calculateAverage(int numStudents, int scores[]) {
    int total = 0;
    for (int i = 0; i < numStudents; ++i) {
        total += scores[i];
    }
    return (float)total / numStudents;
}

// Function to determine pass/fail status
void determinePassFail(int numStudents, int scores[], int passingThreshold, char passFailStatus[]) {
    for (int i = 0; i < numStudents; ++i) {
        passFailStatus[i] = (scores[i] >= passingThreshold) ? 'P' : 'F';
    }
}

// Function to display the report
void displayReport(int numStudents, char names[][50], int scores[], char passFailStatus[]) {
    printf("\nStudent Report:\n");
    printf("%-20s %-10s %-6s\n", "Name", "Score", "Status");

    for (int i = 0; i < numStudents; ++i) {
        printf("%-20s %-10d %s\n", names[i], scores[i], (passFailStatus[i] == 'P') ? "Pass" : "Fail");
    }
}

