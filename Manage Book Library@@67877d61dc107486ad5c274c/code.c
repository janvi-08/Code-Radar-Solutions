#include<stdio.h>
#include<string.h>
struct Book{
    char book;
    char Author;
    int price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Book s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].book);
        scanf("%s",s[i].Author);
        scanf("%d",&s[i].price);
    }
    int k;
    scanf("%d",&k);
    printf("Books above price %.2f:\n",k);
    for(int i=0;i<n;i++){
       if(s[i].price>k){
       
       printf("Title: %s, Author: %s, Price: %.2f\n",s[i].book,s[i].Author,s[i].price);
       }
    }

}