#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll a, b, collatz, pollatz, ans = 0;
    cin >> a >> b;

    for(ll i = a; i <= b; i++) {
        collatz = pollatz = i;
        while(collatz != 1 && pollatz != 1)
        {
            if(collatz & 1) collatz = (collatz * 3) + 1;
            else collatz /= 2;

            if(pollatz & 1) pollatz = (pollatz * 5) + 1;
            else pollatz /= 2;
        }

        if(pollatz == 1 && collatz != 1) ans++;
    }

    printf("%lld\n",ans);
}
