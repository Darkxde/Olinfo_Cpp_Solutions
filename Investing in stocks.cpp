#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,best = 0, sum = 0, last = -1;
    cin >> n;

    ll arr[n],s[n];

    for(ll i = 0; i < n; i++) cin >> arr[i];
    for(ll i = 0; i < n; i++) cin >> s[i];

    for(ll i = 0; i < n; i++)
    {
        if(s[i] == 1)
        {
            if(i == 0 || last == -1)
            {
                sum = last = arr[i];
            }
            else if(arr[i] >= last)
            {
                sum+=arr[i];
                last = arr[i];
            }
            else
            {
                best = max(best,sum);
                sum = arr[i];
                last = arr[i];
            }
        }
        else
        {
            best = max(best,sum);
            sum=0;
            last = -1;
        }

    }

    best = max(best,sum);

    printf("%lld\n",best);

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
