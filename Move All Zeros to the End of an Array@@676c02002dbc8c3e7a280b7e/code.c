#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int brr[n]={0};
    int idx=0;
     for(int i=0;i<n;i++){
        if(arr[i]==0){
            continue;
        }
        else{
            brr[idx]=arr[i];
            idx++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
}