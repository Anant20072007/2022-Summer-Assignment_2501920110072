#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();   // Clear newline from input buffer

    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);

        // Remove newline character
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Sort names alphabetically
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}