// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    struct Triplet
{
    int val, aPos, vPos;
    Triplet(int v, int ap, int vp)
    {
        val = v;
        aPos = ap;
        vPos = vp;
    }
};
struct myCmp
{
    bool operator()(Triplet &t1, Triplet &t2)
    {
        return t1.val > t2.val;
    }
};

    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        vector<int> res;
        priority_queue<Triplet, vector<Triplet>, myCmp> pq;
    
    for(int i = 0; i < k; i++)
    {
        Triplet t(arr[i][0], i, 0);
        pq.push(t);
    }
    
    while(pq.empty() == false)
    {
        Triplet curr = pq.top();
        pq.pop();
        
        res.push_back(curr.val);
        
        int ap = curr.aPos;
        int vp = curr.vPos;
        
        if((vp+1) < k)
        {
            Triplet t(arr[ap][vp+1], ap, vp+1);
            pq.push(t);
        }
    }
    
    return res;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(N, vector<int> (N, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends