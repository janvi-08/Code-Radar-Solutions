#include<stdio.h>
#include<string.h>
struct service{
    char name[100];
    char type[100];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct service s[n];
    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
        scanf("%s",type[i]);
        scanf("%.2f",price[i]);
    }
    int b_count=0,s_count=0,p_count=0;
    float p_sum=0.0,s_sum=0.0,b_sum=0.0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].type,"Basic")==0){
            b_count++;
            b_sum += s[i].price;
        }
        else if(strcmp(s[i].type,"Standard")==0){
            s_count++;
            s_sum += s[i].price;
        }
        if(strcmp(s[i].type,"Premium")==0){
            p_count++;
            p_sum += s[i].price;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f",b_count,b_sum);
    printf(" Standard: %d Users, Revenue: %.2f",s_count,s_sum);
    printf(" Premium: %d Users, Revenue: %.2f",p_count,p_sum);
}