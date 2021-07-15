// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
    stack<int>S;
S.push(-1);
int result=0;
for(int i = 0 ; i < s.length() ; i++ ) {
if(s[i]=='(') {
S.push(i);
}
else {
S.pop();

if( !S.empty() ) {
result=max( result , i - S.top() ) ;
}
else{
S.push(i);
}
}
}
return result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends