#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n-1){
                printf("%d",j);
            }
            else{
                printf("%d",i+j);
            }
        }
        printf("\n");
    }
}