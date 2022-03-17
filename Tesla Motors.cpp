#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, ans, i, j, k, tmp;
    cin >> n;

    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 10) continue;

        j = i, tmp = 0;
        for(k = 0; k < n; k++)
        {
            if(j == n) j = 0;
            tmp += arr[j++] - 10;
            if(tmp < 0) break;
        }

        if(tmp >= 0)
        {
            ans = i+1;
            break;
        }
    }

    printf("%lld",ans);
}
