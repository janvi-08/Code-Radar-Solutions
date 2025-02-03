#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){printf(" "); }
        for(int j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int m=n-1;m>=1;m++){
        for(int p=0;p<n-m;p++){
            printf(" ");
        }
        for(int r=0;r<2*m-1;r++){
            printf("*");
        }
        printf("\n");
    }
}