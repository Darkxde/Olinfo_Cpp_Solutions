#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    ll a,b;
    char ans;
    cin >> a >> b;

    if(a == 0 || b == 0) ans = '0';
    else if(a > 0)
    {
        if(b > 0) ans = '+';
        else ans = '0';
    }
    else
    {
        if(b < 0)
        {
            if((a-b) == 0) ans='-';
            else if(((a-b)+1) % 2 == 0) ans = '+';
            else ans = '-';
        }
        else ans = '0';
    }

    printf("%c",ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
        printf("\n");
    }
}
