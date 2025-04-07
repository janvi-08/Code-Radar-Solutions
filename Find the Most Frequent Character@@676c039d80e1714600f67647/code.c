#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch, "\n")] = '\0'; 
    int max=0;
    char idx;
    for(int i=0;ch[i]!='\0';i++){
        int count=0;
        for(int j=0;ch[j]!='\0';j++){
            if(ch[i]==ch[j]){
                count++;
            }
        }
    
    if(count>max){
        max=count;
        idx=ch[i];
    }
    else if (count == max && ch[i] < idx) {
            idx = ch[i];  
        }
    }

 printf("%c",idx);
}