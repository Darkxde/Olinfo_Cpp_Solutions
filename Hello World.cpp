#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

typedef long long int lli;

lli solve()
{
    string s;
    lli ans = 0;
    int n, cont = 0;

    cin >> s;
    n = (int)s.size();

    for(int i = 0; i < n; i++)
    {
        if(s.compare(i,5,"hello") == 0)
        {
            cont++;
            i+=4;
        }
        if(s.compare(i,5,"world") == 0)
        {
            ans += cont;
            i+=4;
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        //solve();

        printf("%lld", solve());
    }
}
