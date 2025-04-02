#include<stdlib.h>
int gateOpen(int threshold,int entryTimes[],int n){
    for(int i=0;i<n;i++){
        if(abs(entryTimes[i])==threshold){
            return 1;
        }
        else{
            return 0;
        }
    }
}