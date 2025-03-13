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
    for(int i=0;i<n;i++){
        printf("%d",s[i].roll);
        printf("%s",s[i].name);
        printf("%f",s[i].marks);
    }
}