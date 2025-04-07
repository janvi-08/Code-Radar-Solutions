#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char str1[1000];
    char str2[100];
    scanf("%[^\n]s",str1);
    scanf("%[^\n]s",str1);
    char res=strcat(str1,str2);
    printf("%s",res);
}