int duplicates(int ranked[],int n){
    if (n == 0) return 0; 
    int unique=1;
    for(int i=1;i<n;i++){
        if(ranked[i]!=ranked[i-1]){
            ranked[unique++]=ranked[i];
        }
    }
    return unique;
}

void trackPlayerRanks(int ranked[],int n,int player[],int m,int result[] ){
    int size=duplicates(ranked, n);
        for(int j=0;j<m;j++){
            int playerscore=player[j];
            int rank =size + 1;
        }
        for(int k=0;k<size;k++){
            if(playerscore>=ranked[k]){
                rank=k+1;
                break;
            }
        }
         result[j] = rank;
    }
