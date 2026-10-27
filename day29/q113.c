#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

int main() {
    struct Patient p[10];
    int n, i;

    printf("Enter number of patients: ");
    scanf("%d", &n);

    // Input patient details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Patient %d\n", i + 1);

        printf("Patient ID: ");
        scanf("%d", &p[i].id);

        printf("Patient Name: ");
        scanf("%s", p[i].name);

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Disease: ");
        scanf("%s", p[i].disease);
    }

    // Display patient records
    printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        printf("\nPatient %d\n", i + 1);
        printf("Patient ID   : %d\n", p[i].id);
        printf("Patient Name : %s\n", p[i].name);
        printf("Age          : %d\n", p[i].age);
        printf("Disease      : %s\n", p[i].disease);
    }

    return 0;
}