#include<stdio.h>
int fibonacciSeries(int n){
    int a=0,b=1,next;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}