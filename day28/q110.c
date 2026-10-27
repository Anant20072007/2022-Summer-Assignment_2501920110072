#include <stdio.h>

struct Room {
    int roomNo;
    char customerName[50];
    int days;
    float rentPerDay;
};

int main() {
    struct Room room[10];
    int n, i;
    float totalBill;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    // Input customer details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Customer %d\n", i + 1);

        printf("Room Number: ");
        scanf("%d", &room[i].roomNo);

        printf("Customer Name: ");
        scanf("%s", room[i].customerName);

        printf("Number of Days: ");
        scanf("%d", &room[i].days);

        printf("Rent Per Day: ");
        scanf("%f", &room[i].rentPerDay);
    }

    // Display customer details and bill
    printf("\n===== HOTEL MANAGEMENT SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        totalBill = room[i].days * room[i].rentPerDay;

        printf("\nCustomer %d\n", i + 1);
        printf("Room Number   : %d\n", room[i].roomNo);
        printf("Customer Name : %s\n", room[i].customerName);
        printf("Days Stayed   : %d\n", room[i].days);
        printf("Rent Per Day  : %.2f\n", room[i].rentPerDay);
        printf("Total Bill    : %.2f\n", totalBill);
    }

    return 0;
}