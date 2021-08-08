// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        // code here
        int sum=0;

        for(int i=0;i<n;i++) {
            sum+=arr[i];
        }
        if(sum%2!=0) return false;
        
        int dp[sum/2+1][n+1];
        
        for(int i=0;i<=n;i++) {
            dp[0][i]=1;
        }
        for(int i=0;i<=sum/2;i++) {
            dp[i][0]=0;
        }
        for(int i=1;i<=sum/2;i++) {
            for(int j=1;j<=n;j++) {
                dp[i][j]=dp[i][j-1];
                if(i>=arr[j-1]) {
                    dp[i][j]=dp[i][j] || dp[i-arr[j-1]][j-1];
                }
            }
        }
        return dp[sum/2][n];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends