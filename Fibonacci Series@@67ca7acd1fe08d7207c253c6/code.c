#include<stdio.h>
int fibonacciSeries(n){
    int a=0,b=1,next;
    for(int i=0;i<n+1;i++){
        next=a+b;
        printf("%d",next);
        a=b;
        b=next;
    }
}