#include <stdio.h>
int main(){
unsigned int n;
scanf("%d",&n);
unsigned int bits=sizeof(n)*8;
int MSB=bits<<1;
if(bits){
    printf("set");
}
else{
    printf("Not Set");
}
}