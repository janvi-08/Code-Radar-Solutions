#include<string.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if(strcmp(arr[j],arr[min])<0){
                min=j;
            }
        }
        if(min!=i){
            char temp=arr[i];
            int[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}