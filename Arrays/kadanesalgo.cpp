#include<bits/stdc++.h>
using namespace std;




class Solution{
    public:

    int maxSubarraySum(int arr[], int n){
        
        int max = 0, maxend = 0;
   for (int i = 0; i < n; i++)
   {
       maxend = maxend + arr[i];
       if (maxend < 0)
           maxend = 0;
       else if (max < maxend)
           max = maxend;
   }
   return max;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
