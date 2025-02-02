#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1; while(i<=n){
        int j=0;while(j<=i){
            printf("*"*i-j);
            j++;
        }
        i++;
    }
}