#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int max=-1;
    char idx;
    for(int i=0;i!='\0';i++){
        int count=0;
        for(int j=0;i!='\0',j++){
            if(ch[i]==ch[j]){
                count++;
            }
        }
    
    if(count>max){
        max=count;
        idx=ch[i];
    }
}
 printf("%c",idx);
}