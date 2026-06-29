#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Print decreasing characters
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}