#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], largest[50];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    largest[0] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';

            if (strcmp(word, largest) > 0) {
                strcpy(largest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Lexicographically Largest Word: %s\n", largest);

    return 0;
}