int linearSearch(int arr[], int n ,int val){
    for(int i = 0; i < n; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}
