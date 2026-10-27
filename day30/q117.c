#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
};

int main() {
    struct Student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in Subject 1: ");
        scanf("%f", &s[i].marks1);

        printf("Marks in Subject 2: ");
        scanf("%f", &s[i].marks2);

        printf("Marks in Subject 3: ");
        scanf("%f", &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3;
    }

    // Display result
    printf("\n===== STUDENT RESULT PROCESSING SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Name        : %s\n", s[i].name);
        printf("Total Marks : %.2f\n", s[i].total);
        printf("Percentage  : %.2f%%\n", s[i].percentage);

        if (s[i].percentage >= 40)
            printf("Result      : PASS\n");
        else
            printf("Result      : FAIL\n");
    }

    return 0;
}