#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(char j='A';j<'A'+i+1;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}