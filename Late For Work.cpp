#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    int h0,h1,m0,m1,hans = 0,mans = 0;
    cin >> h0 >> m0 >> h1 >> m1;

    if(h0 == 0 && m0 == 0)
    {
        printf("%d %d",h1,m1);
        return;
    }
    if(h0 == h1 && m0 > m1)
        h1 += 24;
    else if(h0 == h1)
    {
        h1 += 24;
    }
    if(h0 > h1)
    {
       h0-=12;
       h1+=12;
    }

    m0+=h0*60;
    m1+=h1*60;

    mans = abs(m0-m1);
    hans = mans/60;
    mans = mans-(hans*60);
    if(hans >= 24) hans-=24;
    printf("%d %d",hans,mans);
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
