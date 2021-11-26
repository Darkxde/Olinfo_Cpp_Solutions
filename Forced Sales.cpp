#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,ans = 0;
    cin >> n;

    ll x[n],y[n];
    for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];

    for(ll i = 1; i <= n; i++)
    {
        if(i == n)
        {
            ans+=(x[i-1]*y[0]-x[0]*y[i-1]);
        }
        else
        {
            ans+=(x[i-1]*y[i]-x[i]*y[i-1]);
        }
    }
    ans/=2;
    if(ans < 0) ans*=-1;
    printf("%lld",ans);
}
