#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        for(char j='A';j='A'+n-i;j++){
            printf("%c ",j);
        }
        printf('\n');
    }
}