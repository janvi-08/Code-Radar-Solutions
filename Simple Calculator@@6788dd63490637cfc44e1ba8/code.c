#include <stdio.h>
int main(){
int a,b; 
char ch;
scanf("%d%d",&a,&b);
scanf("%c",&ch);
if(ch=='+'){printf("%d",a+b);}
else if(ch=='-'){printf("%d",a-b);}
else if(ch=='*'){printf("%d",a*b);}
else if(ch=='/'){
    if(b==0){printf("error");
    }
 }
 else{printf("error");}
}
