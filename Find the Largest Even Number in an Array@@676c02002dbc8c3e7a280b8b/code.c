#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=1;
    int max=-100;
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
    if (even) {
        printf("%d", max); 
    } else if (max != -100) {
        printf("%d", max); 
    } else {
        printf("-1"); 
    }
}