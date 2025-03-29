#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int k=0;
    while(ch[k]!='\0'){
        k++;
    }
    for(int i=0;i<k;i++){
        if((ch[i]>='a'&& ch[i]<='z') ||(ch[i]>='A' && ch[i]<='Z')){
            k++;
        }
    }
    printf("%d",k);
}