#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int  countwords(char *n){
    int words=0;
    bool inword=false;
    while(*n!='\0'){
        if(*n==' '|| *n=='\t' || *n=='\n'){
            inword=false;
        }
        else{
            words++;
            inword=true;
        }
        n++;
    }
    return words;
}
}
int main(){
    char *n;
    scanf("[^\n]s",&n);
    printf("%d",countwords(*n));
}