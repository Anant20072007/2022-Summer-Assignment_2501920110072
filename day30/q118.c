#include <stdio.h>

struct Bus {
    int busNo;
    char passengerName[50];
    int seatNo;
};

int main() {
    struct Bus b[10];
    int n, i;

    printf("Enter number of reservations: ");
    scanf("%d", &n);

    // Input reservation details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Passenger %d\n", i + 1);

        printf("Bus Number: ");
        scanf("%d", &b[i].busNo);

        printf("Passenger Name: ");
        scanf("%s", b[i].passengerName);

        printf("Seat Number: ");
        scanf("%d", &b[i].seatNo);
    }

    // Display reservation details
    printf("\n===== BUS RESERVATION SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        printf("\nPassenger %d\n", i + 1);
        printf("Bus Number     : %d\n", b[i].busNo);
        printf("Passenger Name : %s\n", b[i].passengerName);
        printf("Seat Number    : %d\n", b[i].seatNo);
    }

    return 0;
}