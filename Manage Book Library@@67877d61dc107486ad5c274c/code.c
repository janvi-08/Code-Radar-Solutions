#include<stdio.h>
#include<string.h>
struct Book{
    char book[100];
    char Author[100];
    int price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Book s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].book);
        scanf("%s",s[i].Author);
        scanf("%f",&s[i].price);
    }
    float k;
    scanf("%f",&k);
    printf("Books above price %.2f:\n",k);
    for(int i=0;i<n;i++){
       if(s[i].price>k){
       
       printf("Title: %s, Author: %s, Price: %.2f\n",s[i].book,s[i].Author,s[i].price);
       }
    }

}