#include <stdio.h>

#define MAX_STUDENTS 10
#define SUBJECTS 5

void calculateGrade(float average, char *grade) {
    if (average >= 90) {
        *grade = 'A';
    } else if (average >= 80) {
        *grade = 'B';
    } else if (average >= 70) {
        *grade = 'C';
    } else if (average >= 60) {
        *grade = 'D';
    } else {
        *grade = 'F';
    }
}

int main() {
    int numStudents;
    float marks[MAX_STUDENTS][SUBJECTS];
    float averages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];
    
    // Prompt user for number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input marks for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &marks[i][0]);
        printf("Physics: ");
        scanf("%f", &marks[i][1]);
        printf("Chemistry: ");
        scanf("%f", &marks[i][2]);
        printf("English: ");
        scanf("%f", &marks[i][3]);
        printf("Computer Science: ");
        scanf("%f", &marks[i][4]);

        // Calculate average marks
        float total = 0.0;
        for (int j = 0; j < SUBJECTS; j++) {
            total += marks[i][j];
        }
        averages[i] = total / SUBJECTS;

        // Assign grade based on average
        calculateGrade(averages[i], &grades[i]);
    }

    // Display results
    printf("\nResults:\n");
    printf("Student\tAverage\tGrade\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d\t%.2f\t%c\n", i + 1, averages[i], grades[i]);
    }

    return 0;
}
