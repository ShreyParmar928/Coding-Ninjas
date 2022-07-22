void rotate(int arr[],int n){
    int tmp = arr[0],i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=tmp;
}
void rotate(int arr[], int d, int size) {
    for(int i=0;i<d;i++){
        rotate(arr,size);
    }
}
