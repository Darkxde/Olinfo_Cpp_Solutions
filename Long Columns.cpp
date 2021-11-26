#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    long long n,k,c = 0,u = 0,l,j;
    cin >> n >> k;
    for(long long i = 0; i < n; i++)
    {
        cin >> l;
        if(l < k) u+=l;
        else if(l/k > 10)
        {
            c+=10;
            if(l-(k*10) == k) c++;
            else u+=(l-(k*10));
        }
        else
        {
            c+=(l/k);
            if(l-(k*10) == k) c++;
            else u+=(l-(k*(l/k)));
        }
    }

    printf("%lld %lld",c,u);
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
