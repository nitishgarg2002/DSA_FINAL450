// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        //code here.
        long long dp[n+1][m+1];
        for(int i=0;i<=m;i++){
            dp[0][i]=1;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++){
                dp[i][j]=dp[i][j-1];
                if(S[j-1]<=i) {
                    dp[i][j]+=dp[i-S[j-1]][j];
                }
            }
        }
        return dp[n][m];
    }
};
// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    return 0;
}  // } Driver Code Ends


