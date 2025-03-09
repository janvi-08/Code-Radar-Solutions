#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=1){
        printf("-1 ");
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    int smax=-1;
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