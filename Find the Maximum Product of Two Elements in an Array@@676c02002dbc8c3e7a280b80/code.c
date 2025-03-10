#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int max=-1;
            int product=arr[i]*arr[j];
            if(arr[i]*arr[j]>max){
            max=arr[i]*arr[j];
            }
        }
       
    }
}