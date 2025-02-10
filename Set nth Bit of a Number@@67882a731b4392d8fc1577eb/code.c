#include <stdio.h>
int main() {
    int num, n;
    
    // Read the number and the position of the bit to set
    scanf("%d %d", &num, &n);
    
    // Create a mask with 1 at the nth position
    int mask = 1 << n;
    
    // Use bitwise OR to set the nth bit to 1
    num = num | mask;
    
    // Print the result
    printf("%d", num);
    
    return 0;
}
