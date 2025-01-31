#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    if( n>0  && n%n==0){
        printf("Prime");
    }
    else if(n==1){
        printf("Not Prime");
    }
    else{
        printf("Not prime");
    }
}