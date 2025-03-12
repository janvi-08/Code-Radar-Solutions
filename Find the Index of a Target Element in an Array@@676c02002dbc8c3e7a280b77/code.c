#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
            found=1;
            break;
        }
    }
     if(found==0){
        printf("-1");
     }

}