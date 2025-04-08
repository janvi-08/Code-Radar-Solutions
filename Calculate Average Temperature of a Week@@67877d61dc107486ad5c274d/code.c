#include<stdio.h>
#include<string.h>
struct Day{
    char name[100];
    int temp;
};

int main(){
    int n=7;
    struct Day s[n];
    float sum=0.0;
    for(int i=0;i<7;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].temp);
    }
    for(int i=0;i<n;i++){
        sum += s.[i].temp;
    }
    float avg=sum/7.0;
    printf("Average Temperature: %.2f",avg);
    
    return 0;
    }
     