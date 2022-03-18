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

    ll n, la, lb;
    ll a[MAXN], b[MAXN];

    cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    la = a[0], lb = b[0];
    for(ll i = 1; i<n; i++)
    {
        if(b[i] < la || a[i] > lb)
        {
            printf("NO\n");
            return 0;
        }

        la = a[i], lb = b[i];
    }

    printf("YES\n");
    return 0;
}
