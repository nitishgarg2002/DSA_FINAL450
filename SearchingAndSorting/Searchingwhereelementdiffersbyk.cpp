int search(int arr[],int x,int k){
    int n=arr.size();
    int i=0;
    while(i<n){
        if(arr[i]==x){
            return 1;
        }
        else {
            i = i + max(1, abs(arr[i]-x)/k);
        }
    }
    return -1;
}