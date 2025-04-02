#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<=1){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     int min = INT_MAX;
    int idx1 = -1, idx2 = -1;

    // Compare adjacent elements in the sorted array
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i] - arr[i+1]);
        if (diff < min) {
            min = diff;
            idx1 = i;
            idx2 = i + 1;
        }
    }
    printf("%d %d",arr[idx1],arr[idx2]);
}