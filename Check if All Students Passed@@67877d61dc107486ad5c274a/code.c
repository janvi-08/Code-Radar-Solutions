#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].marks);
    }
    int k=50;
    int ispass=1;
    for(int i=0;i<n;i++){
        if(s[i].marks<k){
            ispass=0;
            break;
        }
    }
    if(ispass==0){
    printf("Not All Passed\n");
    }
    else{
        printf("All Passed\n");
    }
     
}