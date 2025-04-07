#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char str1[1000];
    char str2[100];
    scanf("%[^\n]",str1);
    scanf("%[^\n]",str2);
    strcat(str1,str2);
    printf("%s",str1);
}