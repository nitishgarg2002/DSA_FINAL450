// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int countSetBits(int n)
{
int count = 0;
for (; n; count++)
n = n & (n - 1);

return count;
}
    bool cmp(int a,int b) {
        int count1=countSetBits(a);
        int count2=countSetBits(b);
 if (count1 <= count2)
        return false;
    return true;
    }

class Solution{
    
    public:
 
    
    void sortBySetBitCount(int arr[], int n)
    {
        if(n==0) return;
        // Your code goes here
        stable_sort(arr,arr+n,cmp);
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends