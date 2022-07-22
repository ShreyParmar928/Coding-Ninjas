void sort012(int arr[], int n)  {  
    int count0 = 0,count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){      
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){    
            count1++;
        }  
    }
    
    for(int i=0;i<count0;i++){   
        arr[i]=0;
    }
    int temp = count0 + count1;
     for(int i=count0;i<temp;i++){    
        arr[i]=1;
    }
     for(int i=temp;i<n;i++){    
        arr[i]=2;
    }
}
