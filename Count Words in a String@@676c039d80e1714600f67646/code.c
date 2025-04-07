#include <stdio.h>
#include <stdbool.h>

int countwords(const char *n) {
    int words = 0;
    bool inword = false;

    while (*n != '\0') {
        if (*n == ' ' || *n == '\t' || *n == '\n') {
            inword = false;
        } else {
            // Only increment word count when transitioning from space to a word
            if (!inword) {
                words++;
                inword = true;
            }
        }
        n++; // Move to next character
    }

    return words;
}

int main() {
    char n[1000];  // Array to store input string

    // Read input string (this will read a full line of input)
    fgets(n, sizeof(n), stdin);

    // Call countwords function and print the result
    printf("%d\n", countwords(n));

    return 0;
}
