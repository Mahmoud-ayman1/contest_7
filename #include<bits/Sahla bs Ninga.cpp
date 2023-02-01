#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q;cin>>n>>q;
    int z=0,o=-1;
    for(int i=0;i<n;i++)
    {
        int op,val;cin>>op>>val;
        if(op==1)
        {
            z&=val;
            o&=val;
        }
        else if(op==2)
        {
            z|=val;
            o|=val;
        }
        else
        {
            z^=val;
            o^=val;
        }
    }
    while(q--)
    {
        int w;cin>>w;
        int ans=0;
        bitset<31>no=z,yes=o;
        for(int i=30;i>=0;i--)
        {
            if(ans+(1<<i)<=w&&!no[i]&&yes[i])
            {
                ans|=(1<<i);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
