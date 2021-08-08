// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:

    int countMin(string str){
        int n=str.length();
    //complete the function here
    int table[n][n],gap,l,h;
     memset(table, 0, sizeof(table));
     for (gap = 1; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            table[l][h] = (str[l] == str[h]) ?
                        table[l + 1][h - 1] :
                        (min(table[l][h - 1],table[l + 1][h]) + 1);
    return table[0][n-1];
    
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends