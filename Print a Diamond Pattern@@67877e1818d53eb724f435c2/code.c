#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        int stars=(i<=n) ? 2*i-1: 2 * (2 * n-i)-1;
        int spaces= (i<=n ? n-i : i-n);

        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
    }
}