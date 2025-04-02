#include<stdlib.h>
int gateOpen(int threshold,int entryTimes[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(entryTimes[i]<=0){
            k++;
        } 
    }
    if(k==threshold ){
        return 1;
    }
    return 0;
}