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
    int min=0;
    for(int i=1;i<n;i++){
        if(s[i].marks<s[min].marks){
            min=i;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",s[min].roll,s[min].name,s[min].marks);

}