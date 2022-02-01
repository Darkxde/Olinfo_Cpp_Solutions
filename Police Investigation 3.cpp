#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,ans;
    cin >> n;

    ll arr[n],dp[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    dp[0] = arr[0], dp[1] = arr[1];
    for(ll i = 2; i < n; i++)
    {
        if(dp[i-2]<dp[i-1])
        {
            dp[i] = arr[i]+dp[i-2];
        }
        else
        {
            dp[i] = arr[i]+dp[i-1];
        }
    }

    ans = min(dp[n-2],dp[n-1]);
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
