#include<stdio.h>
int main(){
    int n;
    scanf("%d,&n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int palindrome=1;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            palindrome=0;
            break;
        }
    }
    if(palindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
}