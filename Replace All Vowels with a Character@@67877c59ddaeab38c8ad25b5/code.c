#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]c\n",ch);
    char n;
    scanf("%c",&n);
    int k=0;
    while(ch[k]!='\0'){
        k++;
    }
    for(int i=0;i<k;i++){
        if(ch[i]=='a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o' || ch[i]=='u' || ch[i]=='A'|| ch[i]=='E' || ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U'){
            ch[i]=n;
        }
    }
    for(int i=0;i<k;i++){
    printf("%c",ch[i]);
}
}