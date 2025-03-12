#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int sorted=0;
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                int arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted=1;
            }
        }
    }
    if(sorted==0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
}