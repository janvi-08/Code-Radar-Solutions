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
                int temp=s[i].marks;
                s[i].marks=s[i+1].marks;
                s[i+1].marks=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        char grade='A'+i;
        printf("Roll Number: %d,",s[i].roll);
        printf(" Name: %s,",s[i].name);
        printf(" Grade: %c\n",s[i].grade);
    }
}