#include <stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int answer=0;
    while(n!=0){
        int bit=n&1;
        answer=answer+bit*i;
        n>>1;
        i*=10;
    }
    printf("%d",answer);
    
}