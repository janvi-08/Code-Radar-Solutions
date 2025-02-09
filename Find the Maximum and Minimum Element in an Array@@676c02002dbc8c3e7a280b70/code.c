#include <stdio.h>
int main(){
    int n;
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>array[0]){
            max=array[i];
        }
    }
    printf("%d ",max);
}