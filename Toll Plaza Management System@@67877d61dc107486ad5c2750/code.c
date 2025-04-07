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
    for(int i=0;i<n;i++){
        if(s[i].type=="Car "){
            s[i].sum += s[i].amount;
            printf("Cars: %.2f,", s[i].sum);
        }
        else if(s[i].type=="Truck"){
            s[i].sum += s[i].amount;
            printf(" Trucks: %.2f,", s[i].sum);
        }
        else if(s[i].type=="Bike"){
            s[i].sum += s[i].amount;
            printf(" Bikes : %.2f,", s[i].sum);
        }
        printf("\n");
    }
    
}