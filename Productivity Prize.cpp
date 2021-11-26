#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,e,ans = LONG_MIN;
    cin >> n >> m >> e;

    int i = n;
    while(i >= m)
    {
        ans = max(ans,(e%i));
        --i;
    }

    printf("%lld",ans);
}
