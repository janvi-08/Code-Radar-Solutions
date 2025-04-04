int findUnsortedSubarray(int arr[],int n){
    int left=-1,right=-1
    for(int ;i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            left=i-1;
        }
        
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            left=i+1;
        } 
    }
    if (left == -1 || right == -1) {
        return 0;
    }
    return right - left - 1;
}