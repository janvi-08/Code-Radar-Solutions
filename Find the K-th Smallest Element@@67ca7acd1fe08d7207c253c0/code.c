#include<stdio.h>
int kthSmallest(int arr[],int n,int k){
    if(k>n || k<1){
        return -1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
        return arr[k-1];
    
}