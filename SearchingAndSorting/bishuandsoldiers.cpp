#include<bits/stdc++.h>

using namespace std;
int main()

{
    int n,q;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)

    {cin>>a[i];}

    cin>>q;

    while(q--)

    {

        int aa,count=0,sum=0;

        cin>>aa;

        for(int i=0;i<n;i++)

        {if(aa>=a[i])   // to check given condition

        count++,sum+=a[i];  // to get number of soldiers and their Power

        }      

        

        cout<<count<<" "<<sum<<"\n";

    }

    return 0;

}