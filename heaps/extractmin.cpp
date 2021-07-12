int extractMin(int arr[],int size) {
    if(size==0) return INT_MAX;
    if(size==1) {
        size--;
        return arr[0];
    }
    swap(arr[0],arr[size-1]);
    size--;
    minHeapify(0);
    return arr[size];
}