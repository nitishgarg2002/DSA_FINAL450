// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int n, int p[])
    {
        // code here
        int dp[n][n];
        int i,j,l,k;
        for( i=1;i<n;i++) {
            dp[i][i]=0;
        }
        for(l=2;l<n;l++) {
            for(i=1;i<n-l+1;i++) {
                j=i+l-1;
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++) {
                    int q=dp[i][k]+dp[k+1][j]+ (p[i-1]*p[k]*p[j]);
                    if(q<dp[i][j]) {
                        dp[i][j]=q;
                    }
                }
            }
        }
        return dp[1][n-1];
        
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
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends