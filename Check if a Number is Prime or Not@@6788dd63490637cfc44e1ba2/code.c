#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    if(n>1){
        for(i=2;i<n,i++){
            if(n%i==0){
                printf("Not Prime");
                return 0;
            }
        }
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}