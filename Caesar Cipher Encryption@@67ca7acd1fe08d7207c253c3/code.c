#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ch[i]=ch[i]+n;
    }
    
       printf("%s",ch);
    
}