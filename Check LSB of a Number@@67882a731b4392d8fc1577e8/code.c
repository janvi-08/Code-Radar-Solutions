#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int bit=n&1;
    if(bit){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}