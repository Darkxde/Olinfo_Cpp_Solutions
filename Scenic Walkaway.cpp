#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n, k, spread, best = LONG_MAX;

    cin >> n >> k;

    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);
    for(ll i = 0; i+k-1<n; i++)
    {
        spread = arr[i+k-1]-arr[i];
        best = min(best, spread);
    }

    printf("%lld\n", best);
}
