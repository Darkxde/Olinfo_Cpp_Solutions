#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

ll solve()
{
    ll n, m, a, b, ans = 0;
    cin >> n >> m >> a >> b;
    
    while(n > 0)
    {
        if(n < m)
        {
            if(b < (n*a)) ans+=b;
            else ans += n*a;
            n = 0;
        }
        else if(b < (m*a))
        {
            ans += b;
            n -= m;
        }
        else
        {
            ans += m*a;
            n -= m;
        }

    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        printf("%lld\n", solve());
    }
}
