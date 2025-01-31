#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    if(n>1 && n>0  && n%n==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}