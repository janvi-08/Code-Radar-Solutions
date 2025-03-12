#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=1;
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            even=0;
        }
        else{
            if(arr[i]> max){
            max=arr[i];
           }
        }
    }

  
    if(even==0){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
}