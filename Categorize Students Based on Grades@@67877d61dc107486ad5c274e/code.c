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
        for(int j=0;j<n;j++){
            if(s[i+1].marks>s[i].marks){
                struct student temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
    }
    char grade;
    for(int i=0;i<n;i++){
        if(s[i].marks>=85){
            grade='A';
        }
        else if(s[i].marks<85 && s[i].marks>=70){
            grade='B';
        }
        else if(s[i].marks<70){
            grade='C';
        }
        printf("Roll Number: %d,",s[i].roll);
        printf(" Name: %s,",s[i].name);
        printf(" Grade: %c\n",grade);
    }
}