void wavePrint(int **input, int nRows, int mCols){
    
    int i,j=0;   
    while(j<mCols){
        if(j%2==0){    
            for(i=0;i<nRows;i++){
                cout<<input[i][j]<<" ";
                if(i==(nRows-1)){
                    break;    
                }
            }
            j++;
        }else{     
            for(i=(nRows-1);i>=0;i--){
                cout<<input[i][j]<<" ";
                if(i==0){
                    break;
                }
            }
            j++;
        }
    }
    
}
