#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    if(n>1){
        for(int i=2;i<n,i++){
            if(n%i==0){
                printf("Prime");
                break;
            }
        }
    }
    else{
        printf("Not Prime");
    }
}