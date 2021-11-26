#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,ans = INT_MAX;
    cin >> n;

    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    
    for(ll i = 0; i<n; i++)
    {
        ans = min(ans,max(a[i]-a[0],a[n-1]-a[i]));
    }

    printf("%lld",ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
        printf("\n");
    }
}
