#include<bits/stdc++.h>

#define int long long

#define ff first

#define ss second

using namespace std;
void solve()

{

    int n,q;
    cin>>n>>q;
    vector<pair<int,int>> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i].ff>>arr[i].ss;
    sort(arr.begin(),arr.end());
    int idx=0;
    for(int i=1;i<n;i++)
    {
        if(arr[idx].ss >= arr[i].ff)
        {
            arr[idx].ss = max(arr[idx].ss,arr[i].ss);

        }
        else
        {
            idx++;
            arr[idx]=arr[i];
        }

    }
while(q--)
    {
    int k;

        cin>>k;
        int ans=-1;

        for(int i=0;i<=idx;i++)

        {

            if(arr[i].ss-arr[i].ff+1>=k)

            {

                ans = arr[i].ff+k-1;

                break;

            }

            else

            {

                k-= arr[i].ss-arr[i].ff+1;

            }

        }

        cout<<ans<<"\n";

    }

}


 

signed main()

{

    int t;

    cin>>t;

    while(t--)

    {
        solve();

    }

}

