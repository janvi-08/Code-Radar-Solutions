#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");return 0;}
    for(i=2,i*i<=n;i++){
        if(n%i==0){
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
}
    