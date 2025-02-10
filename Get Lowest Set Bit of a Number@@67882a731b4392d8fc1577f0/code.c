#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Finding the position of the lowest set bit
    int position = 0;

    if (n == 0) {
        // If n is zero, there is no set bit
        printf("No set bit\n");
        return 0;
    }

    // The lowest set bit can be found by using n & -n
    int lowest_set_bit = n & -n;

    // Loop to find the position of the lowest set bit
    while (lowest_set_bit > 1) {
        position++;
        lowest_set_bit >>= 1;
    }

    printf("%d\n", position);
    return 0;
}