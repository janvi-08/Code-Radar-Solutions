#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int smin=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min!=smin && arr[i]<smin){
            smin=arr[i];
        }
    }
    printf("%d",smin);
}