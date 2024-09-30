/*19.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total_marks, percentage;
    char grade;

    // Input marks for each subject
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for Biology: ");
    scanf("%f", &biology);

    printf("Enter marks for Mathematics: ");
    scanf("%f", &mathematics);

    printf("Enter marks for Computer: ");
    scanf("%f", &computer);

    // Calculate total marks
    total_marks = physics + chemistry + biology + mathematics + computer;

    // Calculate percentage
    percentage = (total_marks / 500) * 100;

    // Determine the grade based on percentage
    if ( 100>=percentage >= 80) {
        grade = 'A+ ';
    } else if ( 79>=percentage >= 70) {
        grade = 'A';
    } else if ( 69>=percentage >= 60) {
        grade = 'A-';
    } else if (59>=percentage >= 50) {
        grade = 'B';
    } else if ( 49>=percentage >= 40) {
        grade = 'C';
       } else if ( 39>=percentage >= 33) {
        grade = 'D';
    }

    // Display the result
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

