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
    int k;
    int count=0;
    scanf("%f",&k);
    for(int i=0;i<n;i++){
        if(s[i].roll>k){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",k,count);
    
}