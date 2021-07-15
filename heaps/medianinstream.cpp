// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int> left;
priority_queue<int,vector<int>,greater<int>> right;
    void insertHeap(int &x)
    {
        if(left.empty()|| x<left.top()) {
            left.push(x);
        }
        else {
            right.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        int l=left.size();
        int r=right.size();
        if(l-r > 1) {
            right.push(left.top());
            left.pop();
        }
        else if(r-l > 1) {
            left.push(right.top());
            right.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        int l=left.size();
        int r=right.size();
        if(l==r) return double((left.top()+right.top()))/2;
        else if(l>r) return left.top();
        else return right.top();
        
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends