#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets("%s",ch);
    int i=0;
    int k=0;
    while(ch[i]!='\0'){
        k++;
        i++;
    }
    printf("%d",k);
}