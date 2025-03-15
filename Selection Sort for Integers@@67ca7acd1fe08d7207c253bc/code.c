#include<stdio.h>
#include<limits.h>
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        for(int j=0;j<n-1;j++){
            if(arr[j]<min){
                min=arr[j];
            }
        }
        int temp=min;
        min=arr[i];
        arr[i]=temp;
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i];)
    }
}