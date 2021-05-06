#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n){
    // Your code here
  int jumps=0,ce=0,cf=0;
  for(int i=0;i<n-1;i++){
      cf=max(cf,i+arr[i]);
      if(i==ce){
          jumps++;
          ce=cf;
      }
      if(ce>=n-1)
      break;
  }
  if(ce<n-1) return -1;
  return jumps;
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends