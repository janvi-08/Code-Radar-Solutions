#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int k=0;
    while(ch[k]!='\0'){
        k++;
    }
    int n=0;
    for(int i=0;i<k;i++){
        if(ch[i]=='a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o' || ch[i]=='u' || ch[i]=='A'|| ch[i]=='E' || ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U'){
            ch[i]=='*';
        }
    }
    for(int i=0;i<k;i++){
    printf("%c",ch[i]);
}
}