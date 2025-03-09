#include<stdio.h>
int fibonacciSeries(int n){
    int a=0,b=1,next;
    if(n>1){
        printf("%d %d ",a,b);
    }
    if(n==1){
        printf("%d",0)
    }
    for(int i=2;i<n;i++){
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}