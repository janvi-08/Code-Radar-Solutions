#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<=n;i++){
        for(int j=1;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
}