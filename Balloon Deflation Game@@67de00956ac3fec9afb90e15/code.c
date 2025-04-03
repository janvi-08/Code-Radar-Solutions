#include<limits.h>
int deflateBalloons(int air[],int n){
    int balloons[n];
    for(int i=0;i<n;i++){
        scanf("%d",&balloons[i]);
    }
    int min=INT_MAX;
    while(1){
        for(int i=0;i<n;i++){
            if(balloons[i]<min){
                min=balloons[i];
            }
        }
    
    if(min==INT_MAX){
        break;
    }
    for(int i=0;i<n;i++){
        balloons[i]=balloons[i]-min;
    }
    }
    for(int i = 0; i < n; i++) {
            if(balloons[i] > 0) {
                count++;
            }
        }
        return count;
}