#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        int count=2-i;
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}