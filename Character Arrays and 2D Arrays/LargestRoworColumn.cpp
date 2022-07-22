void findLargest(int **input, int nRows, int mCols){
    
    char ans='r';
    int c=0;
   	int maxx=-2147483648;
    for(int i=0;i<nRows;i++){
        int sum=0;
        for(int j=0;j<mCols;j++)
        {
            sum+=input[i][j];
        }
        if(sum>maxx){
            maxx=sum;
            c=i;
            ans='r';
     	}
    }


  	for(int i=0;i<mCols;i++){
        int sum=0;
        for(int j=0;j<nRows;j++){
            sum+=input[j][i];
        }
        if(sum>maxx){
            maxx=sum;
            c=i;
            ans='c';
        }
    }

    if(ans=='r')
        cout<<"row"<<" "<<c<<" "<<maxx;
    else if(ans=='c')
        cout<<"column"<<" "<<c<<" "<<maxx;

}
