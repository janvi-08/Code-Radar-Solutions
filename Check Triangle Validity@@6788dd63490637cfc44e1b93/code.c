#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=0 || b<=0 || c<=0){
        printf("Invalid");
    }
    else if((a+b)>c){
        printf("Valid");
    }
    else if((b+c)>a){
        printf("valid");
    }
    else if((c+a)>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}