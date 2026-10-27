#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[10];
    int n, i;
    float totalValue;

    printf("Enter number of products: ");
    scanf("%d", &n);

    // Input product details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p[i].id);

        printf("Product Name: ");
        scanf("%s", p[i].name);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Price per Unit: ");
        scanf("%f", &p[i].price);
    }

    // Display inventory
    printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");

    for (i = 0; i < n; i++) {
        totalValue = p[i].quantity * p[i].price;

        printf("\nProduct %d\n", i + 1);
        printf("Product ID   : %d\n", p[i].id);
        printf("Product Name : %s\n", p[i].name);
        printf("Quantity     : %d\n", p[i].quantity);
        printf("Price        : %.2f\n", p[i].price);
        printf("Total Value  : %.2f\n", totalValue);
    }

    return 0;
}