#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int counted[n];
    for (int i=0;i<n;i++){
        counted[i]=0;
    }
    
    for(int i=0;i<n;i++){
        if(counted[i]==0){
            int k=1;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                k++;
                counted[j]=1;
            }
        }
        int max=-1;
        if(max<k){
            printf("%d",k);
            break;
        }
        
    }
}
}