#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    int isprime=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
               isprime=0;
               break;
            }
            else{
                isprime=1;
                k++;
            }
        }
    }
    if(ixprime==1){
        printf("%d",k);
    }
}