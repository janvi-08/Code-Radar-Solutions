#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int k=0;
    int n=0;
    while(ch[n]!='\0'){
        k++;
        n++;
    }
    if(k==1){
        printf("Yes");
        return 0;
    }
    int ispalindrome=0;
    for(int i=0,j=k-1;i<j;i++,j--){
        if(ch[i]==ch[j]){
            ispalindrome=1;
            break;
        }
    }
    if(ispalindrome==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}