int binarySearch(int arr[], int n, int val){
    int first = 0;
    int last = n-1;
    
    int middle = (first+last)/2;
    
    while(first <= last){
        if(arr[middle] < val){
            first = middle + 1;
        }
        else if( arr[middle] == val){
            return middle;
            break;
        }
        else{
            last = middle - 1;
            
        }
        middle = (first + last)/2;
    }
    if(first > last){
        return -1;
    }
}
