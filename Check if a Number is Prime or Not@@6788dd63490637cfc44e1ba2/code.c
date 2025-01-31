#include <stdio.h>
int main(){
    int a; 
    scanf("%d",&a);
    if(a==2 || a==3 || a==5 || a==7 || a==11 || a==13 ){
        printf("Prime");
    }
    else if(a%2!=0 || a%3!=0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}