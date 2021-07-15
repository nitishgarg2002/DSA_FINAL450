// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        for(long long i=0;i<n;i++) {
            pq.push(arr[i]);
        }
        long long res=0;
        while(pq.size()>=2) {
            long long temp = pq.top();
            pq.pop();
            long long temp2 =pq.top();
            pq.pop();
            long long ans=temp+temp2;
            res+=ans;
            pq.push(ans);
        }
        return res;
    }
};


// { Driver Code Starts.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends