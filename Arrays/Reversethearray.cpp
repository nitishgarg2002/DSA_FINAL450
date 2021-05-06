#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

void reverseArr(int arr[],int n) {
    int l=0,r=n-1;
    while(l<=r) {
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArr(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i];
}