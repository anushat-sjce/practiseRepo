#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CHAR_COUNT 256 // Total number of ASCII characters

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Array to count character frequencies
    int count[CHAR_COUNT] = {0};

    // Increment count for characters in str1 and decrement for str2
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
