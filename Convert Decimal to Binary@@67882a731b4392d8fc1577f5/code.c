#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int answer=0;
    while(n!=0){
        int bit=n&1;
        answer=answer+bit*pow(10,i);
        n>>1;
        i++;
    }
    printf("%d",answer);
    
}