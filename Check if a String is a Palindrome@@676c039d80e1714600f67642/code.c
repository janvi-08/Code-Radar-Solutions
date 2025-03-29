#include<stdio.h>
#include<string.h>

int main() {
    char ch[100];
    
    // Read the entire line of input, including spaces
    scanf("%[^\n]s", ch);
    
    int k = 0;
    int n = 0;
    
    // Find the length of the string
    while(ch[n] != '\0') {
        k++;
        n++;
    }
    
    int ispalindrome = 1;  // Assume the string is a palindrome initially
    
    // Check for palindrome by comparing characters from both ends
    for(int i = 0, int j = k - 1; i < j; i++, j--) {
        if(ch[i] != ch[j]) {
            ispalindrome = 0;  // If characters don't match, it's not a palindrome
            break;  // No need to check further
        }
    }
    
    // Output the result based on palindrome check
    if(ispalindrome == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
