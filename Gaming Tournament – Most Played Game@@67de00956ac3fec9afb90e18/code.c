int mostPlayedGame(int games[],int n){
    int idx=-1;
    int max=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(games[i]==games[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            idx=i;
        }
    }
    return idx;
}