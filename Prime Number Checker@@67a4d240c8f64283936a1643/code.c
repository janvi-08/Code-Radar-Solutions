#include <stdio.h>
int prime(n){
    if(n>1){
        for(int i=0;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
        else{
            return 1;
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",prime(n));
    }
}