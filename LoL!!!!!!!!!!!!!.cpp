#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll s[n+1]={},ans[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        ans[i]=s[i];
    }
    for(int o=0;o<n-1;o++)
    {
        int a,b;cin>>a>>b;
        ans[a]+=s[b];
        ans[b]+=s[a];
    }
    cout<<*max_element(ans,ans+n+1);
    return 0;
}
