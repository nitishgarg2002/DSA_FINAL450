// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int trial(int x) {
        int ans=0;
        while(x) {
            ans+=x/5;
            x=x/5;
        }
        return ans;
    }
        int findNum(int n)
        {
        //complete the function here
        if(n==1)
        return 5;
        int low=0,high=5*n;
        while(low<high) {
           int mid = (low+high)>>1;
            if(n<=trial(mid)){
               high=mid;
            }
           
            else low=mid+1;
        }
        return low;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends