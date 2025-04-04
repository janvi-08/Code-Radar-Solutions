int findUnsortedArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            continue;
        }
        return arr[i];
    }
}