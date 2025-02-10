#include <stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
    
    if(isPrime(num)){ printf("1\n"); }
    else{printf("0\n");}
}
return 0;
}