#include <stdio.h>

// Function to find the maximum of two numbers
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = maximum(num1, num2);

    printf("Maximum number = %d\n", result);

    return 0;
}