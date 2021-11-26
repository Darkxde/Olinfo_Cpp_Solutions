#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,ans = 0;
    cin >> n >> m;
    ll a[n], b[m];

    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];

    sort(a,a+n,greater<int>());
    sort(b,b+m,greater<int>());

    ll i = 0, j = 0;
    while((i < n) && (j < m))
    {
        if(a[i] == b[j])
        {
            ans++;
            i++;
        }
        if(a[i] > b[j]) i++;
        if(a[i] < b[j]) j++;
    }

    if(i == n)
    {
        --i;
        for(j = j; j < m; j++)
            if(a[i] == b[j]) ans++;
            else if(a[i] < b[j]) break;
    }

    if(j == m)
    {
        --j;
        for(i = i; i < n; i++)
            if(a[i] == b[j]) ans++;
            else if(a[i] < b[j]) break;
    }

    printf("%lld",ans);
}
