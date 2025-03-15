#include<stdio.h>
int insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}