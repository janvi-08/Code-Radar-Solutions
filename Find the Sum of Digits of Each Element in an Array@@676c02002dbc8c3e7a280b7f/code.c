#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int sum=0;
        while(temp!=0){
            int r=temp%10;
            sum=sum+r;
            temp=temp/10;
        }
        printf("%d ",sum);

    }
    
}