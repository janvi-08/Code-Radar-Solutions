#include<stdio.h>
#include<string.h>
struct ticket{
    char name[100];
    char type[100];
    int price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct ticket s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%s",s[i].type);
        scanf("%d",&s[i].price);
    }
    float std_sum=0.0,pre_sum=0.0,vip_sum=0.0;
    for(int i=0;i<n;i++){
        if ((strcmp(s[i].type,"Standard")==0)){
            std_sum += s[i].price;
        }
        else if ((strcmp(s[i].type,"Premium")==0)){
            pre_sum += s[i].price;
        }
        else if ((strcmp(s[i].type,"VIP")==0)){
            vip_sum += s[i].price;
        }
    }
    printf("Standard: %.2f,\n",std_sum);
    printf("Premium: %.2f,\n",pre_sum);
    printf("VIP: %.2f\n",vip_sum);
}