#include<stdio.h>
#include<string.h>
struct vehicle{
    char num[100];
    char type[100];
    float amount;
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
        printf("Cars: %.2f,",s[i].amount);
        printf(" Trucks: %.2f,",s[i].amount);
        printf(" Bikes: %.2f\n",s[i].amount);
    
}
}