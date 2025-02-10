#include <stdio.h>
// trailing zeros in a binary number are the consecutive zeros that appear at the rightmost end of the number,
//  starting from the least significant bit (LSB).
int main(){
    int n,count;
    scanf("%d",&n);
    if(n%2==0 && n!=0){
        count++;
        n=n/2;
    }
    printf("d",count);
}