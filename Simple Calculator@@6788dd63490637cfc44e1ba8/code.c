#include <stdio.h>
int main(){
int a,b; scanf("%d%d",&a,&b);
char ch;
if(ch=='+'){printf("%d",a+b);}
else if(ch=='-'){printf("%d",a-b);}
else if(ch=='*'){printf("%d",a*b);}
else if(ch=='/'){printf("%d",a/b);}
}
