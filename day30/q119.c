#include <stdio.h>

struct Passenger {
    int trainNo;
    char name[50];
    int seatNo;
};

int main() {
    struct Passenger p[10];
    int n, i;

    printf("Enter number of reservations: ");
    scanf("%d", &n);

    // Input passenger details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Passenger %d\n", i + 1);

        printf("Train Number: ");
        scanf("%d", &p[i].trainNo);

        printf("Passenger Name: ");
        scanf("%s", p[i].name);

        printf("Seat Number: ");
        scanf("%d", &p[i].seatNo);
    }

    // Display reservation details
    printf("\n===== RAILWAY RESERVATION SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        printf("\nPassenger %d\n", i + 1);
        printf("Train Number   : %d\n", p[i].trainNo);
        printf("Passenger Name : %s\n", p[i].name);
        printf("Seat Number    : %d\n", p[i].seatNo);
    }

    return 0;
}