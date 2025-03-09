#include<stdio.h>
#include<limit.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    int smax=Int_Min;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
}