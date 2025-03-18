#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[100];
    float salary;
    float bonus;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Employee s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].id);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].salary);
    }
    
    for(int i=0;i<n;i++){
    if(s[i].salary <50000){
        s[i].bonus=(10*s[i].salary)/100;
    }
    else{
        s[i].bonus=(5*s[i].salary)/100;
    }
    }
    for(int i=0;i<n;i++){
        printf("Employee ID: %d,",s[i].id);
        printf(" Name: %s,",s[i].name);
        printf(" Bonus: %.2f\n",s[i].bonus);
    }
}