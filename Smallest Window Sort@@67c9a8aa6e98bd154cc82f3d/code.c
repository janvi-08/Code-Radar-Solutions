int findUnsortedSubarray(int arr[],int n){
    int left=-1,right=-1;
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            left=i-1;
            break;
        }
        
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            right=i+1;
            break;
        } 
    }
    if (left == -1 || right == -1) {
        count=0;
        return 0;
    }
    for(int i=left;i<=right;i++){
        count++;
    }
    printf("%d",count);
}