#include<stdio.h>
#include<string.h>
struct Rectangle{
    int length;
    int breadth;
     float Area;
    float Perimeter;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Rectangle s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].length);
        scanf("%d",&s[i].breadth);
    }
    for(int i=0;i<n;i++){
        s[i].Area=s[i].length*s[i].breadth;
       s[i]. Perimeter=0.5*s[i].length*s[i].breadth;
    }
    for(int i=0;i<n;i++){
    printf("Rectangle : Area = %.2f, Perimeter = %.2f ",s[i].Area,s[i].Perimeter);
    }
}