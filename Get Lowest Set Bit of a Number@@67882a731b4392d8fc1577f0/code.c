#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bit=n & (~(n-1));
    printf("%d",bit);
}