#include <stdio.h>
#include <limits.h>

int deflateBalloons(int air[], int n) {
    int balloons[n];
    
    // Copy the air values into the new array 'balloons'
    for (int i = 0; i < n; i++) {
        balloons[i] = air[i];
    }
    
    while (1) {
        int min = INT_MAX; // Initialize min to the highest possible value
        
        // Find the smallest non-zero air amount
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0 && balloons[i] < min) {
                min = balloons[i];
            }
        }
        
        // If no balloon has air left, break the loop
        if (min == INT_MAX) {
            break;
        }
        
        // Subtract the minimum value from all balloons with air left
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0) {
                balloons[i] -= min;
            }
        }
        
        // Count how many balloons still have air
        int currentCount = 0;
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0) {
                currentCount++;
            }
        }
        
        // Print the count of balloons that still have air at the start of this round
        printf("%d\n", currentCount);
    }
    
    return 0; // No need to return anything for this task
}

