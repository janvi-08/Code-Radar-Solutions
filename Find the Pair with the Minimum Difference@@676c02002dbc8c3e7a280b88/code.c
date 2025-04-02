#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int idx1=-1;
    int idx2=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]<min){
                min=arr[i]-arr[j];
                idx1=i;
                idx2=j;
            }
        }
    }
    printf("%d %d",arr[idx1],arr[idx2]);
}