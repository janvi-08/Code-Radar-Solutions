#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int nth=1<<n ;
    int clear= num& ~nth ;
    printf("%d",clear);
}