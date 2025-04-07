#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void countwords(*n){
    int words=0;
    bool inword=false;
    while(n!='\0'){
        if(*n==' '|| *n=='\t' || *n=='\n'){
            inword=false;
        }
        else{
            words++;
            inword=true;
        }
        str++;
    }
}
int main(){
    char *n;
    scanf("[^\n]s",&n);
    printf("%d",countwords(*n));
}