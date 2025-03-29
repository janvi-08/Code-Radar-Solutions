#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    char n;
    scanf("%c",&n);
    char m;
    scanf("%c",&m);
    for(int i=0;i<n;i++){
        if(ch[i]==n){
            ch[i]==m;
        };
    }
    for(int i=0;i<n;i++){
       printf("%s",ch[i]);
    }
}