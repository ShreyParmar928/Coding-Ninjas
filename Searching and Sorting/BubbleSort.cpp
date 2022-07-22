void bubbleSort(int arr[], int n){
    int k=0;
  while( k < n-1){    
        for(int i=0;i<n-1;i++){    
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
      k++;
  }
}
