#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=k%n;
    for(int i=n+1-k;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n+1-k;i++){
        printf("%d\n",arr[i]);
    }
}