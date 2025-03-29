#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ch[i]+ n =ch[i];
    }
    for(int i=0;i<n;i++){
       printf("%s",ch[i]);
    }
}