#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main()
{
    ll n,ans = 0;
    cin >> n;

    ll p[n];
    for(ll i = 0; i < n; i++) cin >> p[i];

    sort(p,p+n,greater<long long>());
    for(ll i = 0; i < n; i++)
        if((i+1)%3 != 0) ans+=p[i];

    printf("%lld",ans);

}
