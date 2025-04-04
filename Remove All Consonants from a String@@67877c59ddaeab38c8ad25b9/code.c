#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    char result[100]; // To store vowels
    int j = 0;

    scanf("%[^\n]s", ch);

    // Loop through the string to extract vowels
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || 
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
            result[j++] = ch[i]; // Add vowel to result string
        }
    }

    result[j] = '\0'; // Null-terminate the result string

    // Print the modified string
    printf(result);

    return 0;
}