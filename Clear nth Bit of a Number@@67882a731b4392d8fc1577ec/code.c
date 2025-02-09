#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int nth=1<<n ;
    int clear= ~nth &1;
    printf("%d",clear);
}