#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    char n,m;
    scanf(" %c\n",&n);
    scanf(" %c\n",&m);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==n){
            ch[i]=m;
        }
    }
    for(int i=0;i<n;i++){
       printf("%c",ch[i]);
    }
}