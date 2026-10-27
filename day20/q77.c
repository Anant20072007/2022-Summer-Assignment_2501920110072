#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j;
    int rowSum, colSum;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of each row
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    // Sum of each column
    printf("Sum of each column:\n");
    for (j = 0; j < cols; j++) {
        colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += a[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}