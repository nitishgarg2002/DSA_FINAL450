// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
        sort(arr, arr+n);
        int carry = 0;
        string str = "";
        for(int i=n-1; i>=0; i-=2) {
            int x = arr[i] + arr[i-1] + carry;
            if(x == 0) {
                return str;
            }
            carry = x / 10;
            x = x % 10;
            str = to_string(x) + str;
        }
        if(carry != 0) {
            str = to_string(carry) + str;
        }
        return str;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends