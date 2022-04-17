#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

const int MAXN = 100000;

ll pairs(int N, int D, int A[])
{
    int i = 0, j = 1, diff;
    ll ans = 0;

    while(i <= N-2)
    {
        diff = A[j]-A[i];
        if(diff >= D || j >= N)
        {
            ans += j-i-1;
            i++;
        }
        else j++;
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
        int n, d, arr[MAXN];
        cin >> n >> d;
        for(int i = 0; i < n; i++) cin >> arr[i];
        printf("%lld", pairs(n,d,arr));
    }
}
