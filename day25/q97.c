#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], smallest[50];
    int i = 0, j = 0, firstWord = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';

            if (firstWord) {
                strcpy(smallest, word);
                firstWord = 0;
            } else if (strcmp(word, smallest) < 0) {
                strcpy(smallest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Lexicographically Smallest Word: %s\n", smallest);

    return 0;
}