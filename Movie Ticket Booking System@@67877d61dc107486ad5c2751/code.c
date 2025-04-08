#include<stdio.h>
struct ticket{
    char name[100];
    char type[100];
    int price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct ticket s;
    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%s",s[i].type);
        scanf("%d",&s[i].price);
    }
}