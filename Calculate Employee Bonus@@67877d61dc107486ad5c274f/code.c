#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[100];
    float bonus;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Employee s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].salary);
    }
    int bonus=0;
    if(salary<50000){
        bonus=(10*salary)/100;
    }
    else{
        bonus=(5*salary)/100;
    }
    for(int i=0;i<n;i++){
        printf("Employee ID: %d,",s[i].roll);
        printf(" Name: %s,",s[i].name);
        printf(" Bonuss: %.2f\n",s[i].bonus);
    }
}