#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int binary[32]; // Assuming a maximum of 32 bits for the binary representation
    int index = 0;

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[index] = n & 1;
        n = n >> 1;
        index++;
    }

    // Print binary in reverse order
    for (int j = index - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    return 0;
}