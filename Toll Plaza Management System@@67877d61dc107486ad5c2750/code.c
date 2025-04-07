#include<stdio.h>
#include<string.h>
struct vehicle{
    char num[100];
    char type[100];
    float amount;
    float sum;
};
int main(){
    int n;
    scanf("%d",&n);
    struct vehicle s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].num);
        scanf("%s",s[i].type);
        scanf("%f",&s[i].amount);
    }
    float car_sum = 0.0, truck_sum = 0.0, bike_sum = 0.0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].type,"Car")==0){
            car_sum += s[i].amount;
        }
        else if(strcmp(s[i].type,"Truck")==0){
            truck_sum += s[i].amount;
        }
        else if(strcmp(s[i].type,"Bike")==0){
            bike_sum += s[i].amount;
        }
    }
    printf("Cars: %.2f,", car_sum);
    printf(" Trucks: %.2f,", truck_sum);
    printf(" Bikes: %.2f", bike_sum);
    
}