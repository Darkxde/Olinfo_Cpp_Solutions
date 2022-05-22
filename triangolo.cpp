#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

const int MAXN = 100;

int solve()
{
    int triangolo[MAXN][MAXN], dp[MAXN], n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> triangolo[i][j];
        }
    }

    for(int i = 0; i <= n-1; i++)
        dp[i] = triangolo[n-1][i];

    for(int i = n-2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            dp[j] = triangolo[i][j] + max(dp[j], dp[j+1]);
        }
    }

    return dp[0];
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
        printf("%d", solve());
    }
}
