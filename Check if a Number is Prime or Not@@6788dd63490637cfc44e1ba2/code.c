#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>1){
        for(int i=1;i<=n;i++){
            if(n%i==0){
                printf("Not Prime");
            }
        }
        else{
            printf("Prime");
        }
    }
}