#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        for(int j=1;j<n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
}