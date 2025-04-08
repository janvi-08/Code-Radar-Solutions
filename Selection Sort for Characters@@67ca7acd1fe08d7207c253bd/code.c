#include<stdio.h>
int selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        char min='z';
        int idx=-1;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<min){
            min=arr[j];
            idx=j;
        }
    }
    int temp=arr[index];
    arr[index]=arr[i];
    arr[i]=temp;
}
}
int printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}