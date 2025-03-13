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
    struct student arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j].marks>arr[j+1].marks){
                struct student temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",arr[i].roll,arr[i].name,arr[i].marks);
    }
}