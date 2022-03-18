#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

const ll MAXN = 100000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n, pos, ans;
    ll arr[MAXN];

    cin >> n;
    for(ll i = 0; i < n; i++) cin >> arr[i];

    for(ll i = 1; i <= 6; i++)
    {
        ans = 0, pos = 0;
        while(pos < n)
        {
            if(arr[pos] == 0)
            {
                pos += i;
                ans++;
            }
            if(pos < n) pos += arr[pos];
        }

        printf("%lld ",ans);
    }

}
