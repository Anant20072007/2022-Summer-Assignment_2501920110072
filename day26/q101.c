#include <stdio.h>

int main() {
    int secret = 25;
    int guess;

    printf("===== Number Guessing Game =====\n");
    printf("Guess a number between 1 and 50\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secret) {
            printf("Too High! Try Again.\n");
        }
        else if (guess < secret) {
            printf("Too Low! Try Again.\n");
        }
        else {
            printf("Congratulations! You guessed the correct number.\n");
        }

    } while (guess != secret);

    return 0;
}