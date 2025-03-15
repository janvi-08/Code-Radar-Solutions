#include<stdio.h>
#include<limits.h>
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int index=-1;
        for(int j=0;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}