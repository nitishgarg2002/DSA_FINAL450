// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(k>m+n || k<1)
        return -1;
         if (n > m)
        return kthElement(arr2, arr1,m,n, k);
        if(n==0) return (arr2[k-1]);
        if(k==1) return min(arr1[0],arr2[0]);
        
        int i=min(n,k/2),j=min(m,k/2);
        if (arr1[i - 1] > arr2[j - 1])
       
        // Now we need to find only
        // k-j th element since we
        // have found out the lowest j
        return kthElement(arr1, arr2+j,n, m-j, k - j);
    else
       
        // Now we need to find only
        // k-i th element since we
        // have found out the lowest i
        return kthElement(arr1+i , arr2, n-i,m, k - i);
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends