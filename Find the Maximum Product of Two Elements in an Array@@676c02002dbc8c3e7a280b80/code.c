#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            int product=arr[i]*arr[j];
            if(arr[i]*arr[j]>max){
                max=product;
            }
             
        }
    }
    printf("%d",max);
   
}