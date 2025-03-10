#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j!=0){
                k++;
            }
        }
    }
    printf("%d",k);
}