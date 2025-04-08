#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            continue;
        }
    }
    for(int i=0;i!='\0',i++){
        printf("%c",ch[i]);
    }
}