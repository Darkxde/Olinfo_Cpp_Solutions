#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

struct strada{
    ll p, l;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,s,ans = 0, i, j;
    cin >> n;

    vector<strada> arr(n);
    for(i = 0; i < n; i++) cin >> arr[i].p;
    for(i = 0; i < n; i++) cin >> arr[i].l;

    i = j = 0;
    while(i < n && j < n)
    {
        s = 0;
        while(arr[i].p <= arr[j].p)
        {
            s += arr[j++].l;
        }
        ans += s * arr[i].p;
        i = j;
    }

    printf("%lld\n",ans);
}
