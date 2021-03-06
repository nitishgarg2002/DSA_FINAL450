// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) {
stack<int>s;
for (int i = 0; i < n; i++) {
s.push(i);
}
while (s.size() >= 2) {
int a = s.top();
s.pop();
int b = s.top();
s.pop();
if (M[a][b] == 0)
s.push(a);
else
s.push(b);
}
int ans = s.top();
for (int i = 0; i < n; i++) {
if (i != ans) {
if (M[i][ans] == 0 || M[ans][i] == 1)
return -1;
}
}

return ans;
}
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
//   1. first we add all the celebs into the stack.
// 2. now , just using a probable method such that if a knows b or not ( 2 top elements of stack )
// 3 . which ever comes first add again it to stack and discard the second one.
// 4. keep this process till stack size >=2
// 5. now just check if any element is present is known by everyone and doesn't know anyone
// 6.this is the desired result