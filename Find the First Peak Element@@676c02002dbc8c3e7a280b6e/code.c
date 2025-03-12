#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = -1;  

    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) &&  
            (i == n - 1 || arr[i] > arr[i + 1])) { 
            peak = arr[i];
            break;  
        }
     }

    printf("%d", peak);
    return 0;
}