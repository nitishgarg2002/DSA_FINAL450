// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long res=1,maxP=1,minP=1;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0)
            swap(maxP,minP);
        
	            maxP=max((long long)arr[i],maxP*arr[i]);
	            minP = min((long long)arr[i],minP*arr[i]);
	    
	        res = max(res,maxP);
	        
	    }
	    return res;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends