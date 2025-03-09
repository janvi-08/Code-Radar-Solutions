#include<stdio.h>
int fibonacciSeries(int n){
    int a=0,b=1,next;
    for(int i=2;i<n+1;i++){
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}