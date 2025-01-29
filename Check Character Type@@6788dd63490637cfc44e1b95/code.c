#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'|| ch=='i' || ch=='o'||ch=='u'){
        printf("Vowel");
    }
    else if(ch>='b'&&ch<='z'){
        printf("Consonant");
    }
    else if(ch>=0 && ch<=9){
        printf("Digit"); }
    else{
        printf("Special Character");
    }
}