#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",ch);
    int size=0;
    int i=0;
    while(ch[i]!='\0'){
        size++;
        i++;
    }
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("%s",str);
}