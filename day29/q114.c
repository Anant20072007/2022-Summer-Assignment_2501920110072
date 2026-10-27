#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char className[20];
    float marks;
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

        printf("Student Name: ");
        scanf("%s", s[i].name);

        printf("Class: ");
        scanf("%s", s[i].className);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student records
    printf("\n===== SCHOOL MANAGEMENT SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Name        : %s\n", s[i].name);
        printf("Class       : %s\n", s[i].className);
        printf("Marks       : %.2f\n", s[i].marks);
    }

    return 0;
}