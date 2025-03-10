#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            return 0;
        }
        else{
            count++;
        }
        
    }
    printf("%d",count);
    }
    

}