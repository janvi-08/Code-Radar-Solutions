int factorialRange(int start,int end){
    int product=1;
    for(int i=start;i<=end;i++){
        if(i==1 || i==0){
            int fact=1;
            printf("%d\n",fact);
        }
        else{
            product=product*i;
            printf("%d\n",product);
        }
    }
}