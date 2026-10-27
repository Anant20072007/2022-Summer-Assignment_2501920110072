#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc[10];
    int n, i, choice, accNo;
    float amount;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    // Input account details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Account %d\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &acc[i].accNo);

        printf("Account Holder Name: ");
        scanf("%s", acc[i].name);

        printf("Initial Balance: ");
        scanf("%f", &acc[i].balance);
    }

    printf("\n===== Banking Management System =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Display Accounts\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

    case 1:
        printf("Enter Account Number: ");
        scanf("%d", &accNo);

        printf("Enter Deposit Amount: ");
        scanf("%f", &amount);

        for (i = 0; i < n; i++) {
            if (acc[i].accNo == accNo) {
                acc[i].balance += amount;
                printf("Updated Balance = %.2f\n", acc[i].balance);
            }
        }
        break;

    case 2:
        printf("Enter Account Number: ");
        scanf("%d", &accNo);

        printf("Enter Withdrawal Amount: ");
        scanf("%f", &amount);

        for (i = 0; i < n; i++) {
            if (acc[i].accNo == accNo) {
                if (amount <= acc[i].balance) {
                    acc[i].balance -= amount;
                    printf("Updated Balance = %.2f\n", acc[i].balance);
                } else {
                    printf("Insufficient Balance!\n");
                }
            }
        }
        break;

    case 3:
        printf("\nAccount Details:\n");

        for (i = 0; i < n; i++) {
            printf("\nAccount Number : %d\n", acc[i].accNo);
            printf("Name           : %s\n", acc[i].name);
            printf("Balance        : %.2f\n", acc[i].balance);
        }
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}