#include <stdio.h>

int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    if((a>b)||(a==b)){
        printf("True");
    }
    else{
        printf("False");
    }
}