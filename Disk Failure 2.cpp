#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

struct day{
    ll a,b;
};

void solve()
{
    ll n,t;
    cin >> n >> t;
    vector<day> days(n);

    for(ll i = 0; i < n; i++)
        cin >> days[i].a >> days[i].b;

    for(ll i = 0; i+1 < n; i++)
    {
        if((days[i+1].a-days[i].b+24) >= t)
        {
            printf("%lld\n",i);
            return;
        }
    }
    printf("-1\n");
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
