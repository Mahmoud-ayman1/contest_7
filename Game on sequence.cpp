#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    if(sum&1)
    {
        cout<<"Alice";
    }
    else
    {
        cout<<"Bob";
    }
    return 0;
}
