

// Function to calculate grade point based on marks
int calculateGradePoint(int marks) {
    // Implementation of grading system
    // Example:
    // if (marks >= 90) return 4;
    // else if (marks >= 80) return 3;
    // ...
}

// Function to verify GPA according to ordinance
void verifyGPA(float gpa) {
    // Implementation to verify GPA and determine promotion status
}

int main() {
    int year, semester;

    // First, request the user to input the year and semester
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the semester: ";
    cin >> semester;

    int numCourses;

    // Second, request the user to input the number of courses in the semester
    cout << "Enter the number of courses in the semester: ";
    cin >> numCourses;

    string studentID;

    // Third, request the user to input the student ID
    cout << "Enter the student ID: ";
    cin >> studentID;

    // Open the marks_sheet.txt file for reading
    freopen("marks_sheet.txt", "r", stdin);

    vector<int> courseCredits;
    int sum = 0;

    // Fourth, store course credits in a vector and calculate sum of credits
    string line;
    while (getline(cin, line)) {
        // Parse line to extract course credit
        // Store course credit in courseCredits vector
        // Update sum variable
    }

    // Search for student ID in the file
    bool found = false;
    while (getline(cin, line)) {
        // Check if line contains student ID
        if (line.find(studentID) != string::npos) {
            found = true;
            vector<int> marks;

            // Fifth, store marks of individual course
            for (int i = 0; i < numCourses; ++i) {
                int mark;
                cin >> mark;
                marks.push_back(mark);
            }

            int x = 0;

            // Sixth, calculate GPA
            for (int i = 0; i < numCourses; ++i) {
                int gp = calculateGradePoint(marks[i]);
                x += gp * courseCredits[i];
            }

            float z = static_cast<float>(x) / sum; // Calculate final GPA

            // Verify GPA according to ordinance
            verifyGPA(z);

            break; // Exit loop after processing student data
        }
    }

    if (!found) {
        cout << "Student ID not found." << endl;
    }

    return 0;
}

