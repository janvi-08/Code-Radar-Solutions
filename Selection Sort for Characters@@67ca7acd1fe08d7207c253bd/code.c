#include<stdio.h>
int selectionSort(char arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>=1&&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}