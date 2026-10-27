#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of characters in first string
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        count1[(int)str1[i]]++;
    }

    // Count frequency of characters in second string
    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        count2[(int)str2[i]]++;
    }

    // Compare frequencies
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("The strings are Anagrams.\n");
    else
        printf("The strings are Not Anagrams.\n");

    return 0;
}