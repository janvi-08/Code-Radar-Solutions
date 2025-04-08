char bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-i-1;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}