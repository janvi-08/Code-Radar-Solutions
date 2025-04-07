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
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(s[i].roll==k){
        printf("Roll Number: %d,",s[i].roll);
        printf(" Name: %s,",s[i].name);
        printf(" Marks: %.2f\n",s[i].marks); 
        return 0;
        }
    }
        printf("Student not found"); 
    }
    
