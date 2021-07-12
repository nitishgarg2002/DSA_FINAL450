#include <bits/stdc++.h>
#include <queue>
using namespace std;

vector<int> maxArray(int arr[],int n,int k) {
    vector<int> res;
    if(k>n) return res;
    priority_queue <int> pq;
    int i=0;
    for( i=0;i<k;i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){
      int maxx=pq.top();
      if(pq.size()==k)
        res.push_back(maxx);
        pq.pop();
       if(i<n)
        {
        pq.push(arr[i]);
        i++;
        }
    }
    return res;

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    vector<int> ans= maxArray(arr,n,k);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}