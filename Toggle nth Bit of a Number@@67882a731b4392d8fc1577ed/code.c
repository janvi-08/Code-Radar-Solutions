#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int nth=1<<n;
    int toggle=num ^ nth;
    printf("%d ",&toggle);
}