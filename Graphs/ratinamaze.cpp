// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void find(vector<vector<int>>&m, string s, int n, int i, int j, vector<string>&ans) {
if (i == n - 1 && j == n - 1) {
ans.push_back(s);
return;
}
if (i >= 0 && j >= 0 && i < n && j < n && m[i][j]) {
m[i][j] = 0;
find(m, s + "D", n, i + 1, j, ans);
find(m, s + "L", n, i, j - 1, ans);
find(m, s + "R", n, i, j + 1, ans);
find(m, s + "U", n, i - 1, j, ans);
m[i][j] = 1;
}
return;

}
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0 || m[n-1][n-1]==0)
        return ans;
        string s;
        find(m,s,n,0,0,ans);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends