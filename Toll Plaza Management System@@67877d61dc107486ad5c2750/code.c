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
    struct Employee s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].num);
        scanf("%s",s[i].type);
        scanf("%f",&s[i].amount);
    }
    
    
    
        printf("Cars: %s,",s[i].num);
        printf(" Trucks: %s,",s[i].num);
        printf(" Bikes: %.2f\n",s[i].num);
    
}