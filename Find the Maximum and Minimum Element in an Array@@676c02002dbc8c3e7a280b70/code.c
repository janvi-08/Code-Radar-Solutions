#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int minimum=array[0];
    for(int i=0;i<n;i++){
        if(array[i]<minimum){
            minimum=array[i];
        }
    }
    int max=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("%d ",minimum);
    printf("%d ",max);
}