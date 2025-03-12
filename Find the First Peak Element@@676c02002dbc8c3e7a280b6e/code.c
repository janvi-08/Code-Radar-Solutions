#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak=0;
    int element=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            peak=0;
            break;
        }
        else if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            element=arr[i];
            peak=1;
            break;
        }
        else if(i=n-1 && arr[i]>arr[i-1]){
            element=arr[i];
            peak=1;
            break;
        }
        
    }
    if(peak==0){
        printf("-1");
    }
    else{
        printf("%d",element);
    }
}