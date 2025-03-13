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
    float total=0;
    float avg=0;
    for(int i=0;i<n;i++){
        total=total+s[i].marks;
    }
    printf("Average Marks: %.2f",total/n);
}