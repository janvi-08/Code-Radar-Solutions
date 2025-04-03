#include<limits.h>
int deflateBalloons(int air[],int n){
    int balloons[n];
    for (int i = 0; i < n; i++) {
        balloons[i] = air[i];
    }
    while(1){
           int min=INT_MAX;
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
    
    int count=0;
    for(int i = 0; i < n; i++) {
            if(balloons[i] > 0) {
                count++;
            }
        }
        return count;
    }
}