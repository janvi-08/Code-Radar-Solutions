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
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j].marks>arr[j+1].marks){
                int temp=arr[j].marks;
                arr[j].marks=arr[j+1].marks;
                arr[j+1].marks=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
}