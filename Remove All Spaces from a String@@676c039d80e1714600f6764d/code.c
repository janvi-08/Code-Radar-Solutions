#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]",ch);
    int j=0;
    char result[100];
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!=' '){
            result[j++]=ch[i];
        }
    }
    result[j]='\0';
        printf("%s",result);
}