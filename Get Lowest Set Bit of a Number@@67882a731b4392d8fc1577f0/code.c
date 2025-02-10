#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int result=~n;
    int bit=n & (result+1);
    printf("%d",bit);
}