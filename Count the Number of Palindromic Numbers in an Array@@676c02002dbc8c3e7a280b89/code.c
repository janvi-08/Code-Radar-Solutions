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
        for(int k=0,j=n-1;k<j;k++,j--){
        if(arr[k]!=arr[j]){
            return 0;
        }
        else{
            count++;
        }
        
    }
    printf("%d",count);
    
    }
    

}