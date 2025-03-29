#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int k=0;
    i=0;
    while(ch[i]!='\0'){
        k++;
    }
    int ispalindrome=1;
    for(i=0,j=k-1;i<j;i++,j--){
        if(arr[i]==arr[j]){
            ispalindrome=0;
   }
}
if(ispalindrome==1){
    printf("Yes");
}
else{
    printf("No");
}