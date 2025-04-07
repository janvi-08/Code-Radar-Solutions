#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int counting(char *ch){
    int count=0;
    bool inword=false;
    while(*ch!='\0'){
        if(*ch==' ' || *ch=='\t' ||*ch=='\n'){
            inword=false;
        }
        else(!inword){
            count++;
            inword=true;
        }
        ch++;
    }
    return count;
}
int main(){
    char ch[1000];
    fgets(ch,sizeof(ch),stdin);
    int res=counting(*ch);
    printf("%d",res);
}