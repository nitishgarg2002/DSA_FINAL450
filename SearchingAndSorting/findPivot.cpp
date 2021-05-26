int findPivot(int arr[],int low,int high) {
    if(low>high) return -1;
    if(low==high) return low;
    int mid=low+(high-low)/2;
    if(mid<high && arr[mid]>arr[mid+1] ){
        return mid;
    }
    if(arr[mid]<arr[mid-1] && mid>low){
        return mid-1;
    }
    if(arr[low]>=arr[mid]){
        return findPivot(arr,low,mid-1);
    }
    else{
        return findPivot(arr, mid+1, high);
    }
}