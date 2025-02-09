#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int nth=num>>n & 1;
    printf("%d ",nth);
}