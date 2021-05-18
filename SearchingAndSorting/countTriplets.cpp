// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
   sort(arr, arr+n);
   int a,b;
   long long count = 0;
   for(int i = 0; i < n-2; i++) {
   a = i+1;
    b = n-1;
   while(a < b) {
if(arr[i]+arr[a]+arr[b]>=sum) b--;
else {
count += b-a;

a++;
}
}
}
return count;
	    
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends