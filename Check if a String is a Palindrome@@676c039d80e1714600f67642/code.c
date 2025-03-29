#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int k=0;
    int i=0;
    while(ch[i]!='\0'){
        k++;
        i++;
    }
    int ispalindrome=1;
    for(int i=0,int j=k-1;i<j;i++,j--){
        if(ch[i]==ch[j]){
            ispalindrome=0;
            break;
   }
}
if(ispalindrome==0){
    printf("Yes");
}
else{
    printf("No");
}
}