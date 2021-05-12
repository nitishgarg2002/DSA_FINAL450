// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    bool isPair(int A[],int left,int right,int x){
 
    while(left<right){
        if(A[left]+A[right]==x){
            return true;
        }
        else if(A[left]+A[right]<x){
            left++;
        }
        else{
            right--;
        }
        
    }
    return false;
}
bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    sort(A,A+n);
    for(int i=0;i<n;i++){
        if(isPair(A,i+1,n-1,X-A[i])){
            return true;
        }
       
        
    }
    return false;
  
}

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends