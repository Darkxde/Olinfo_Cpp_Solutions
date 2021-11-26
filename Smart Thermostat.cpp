#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main()
{
    ll n, ans = 0, last = -1;
    cin >> n;

    ll v[n];
    for(ll i = 0; i < n; i++) cin >> v[i];

    for(ll i = 0; i < n; i++)
    {
        if(v[i] == -1)
        {
            if(last == -1)
            {
                for(ll j = i+1; j < n; j++)
                    if(v[i] != -1)
                    {
                        ans+=v[i];
                        last = v[i];
                        break;
                    }
            }
            else
                ans+=last;
        }
        else
        {
            ans += v[i];
            last = v[i];
        }
    }

    printf("%lld",ans);
}
