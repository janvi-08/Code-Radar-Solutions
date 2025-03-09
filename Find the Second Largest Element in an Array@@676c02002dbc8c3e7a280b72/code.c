#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0 ){
        printf("-1 ");
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            printf("-1");
        }
    }
    int max=arr[0];
    int smax=INT-MIN;
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