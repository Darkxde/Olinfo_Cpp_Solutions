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

    ll n, tmp, max_here = 0, ans = 0;

    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp > max_here)
        {
            max_here = tmp;
            ans += tmp;
        }
    }

    printf("%lld\n", ans);
}
