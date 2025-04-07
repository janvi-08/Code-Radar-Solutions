#include<stdio.h>
#include<string.h>
struct Day{
    char name[100];
    float temp;
};
struct week{
    struct Day days[7];
};
int main(){
    struct week s;
    char *daynames[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    float sum=0.0;
    for(int i=0;i<7;i++){
        strcpy(s.days[i].name,daynames[i]);
        scanf("%f",&s.days[i].temp);
        sum += s.days[i].temp;
    }
    float avg=sum/7.0;
    printf("Average Temperature: %.2f",avg);
    return 0;
    }
     