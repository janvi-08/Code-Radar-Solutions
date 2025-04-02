#include<stdlib.h>
int gateOpen(int threshold,int entryTimes[],int n){
    for(int i=0;i<n;i++){
        if(abs(entryTimes[i])==threshold || entryTimes[i]<=0){
            return 1;
        }
    }
    return 0;
}