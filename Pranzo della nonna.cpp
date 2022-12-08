#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

typedef long long ll;

constexpr int MAXN = 5000;

int mangia(int N, int K, int P[], int dp[][MAXN+1])
{
    int ans;

    if(N == 0 || K <= 0) ans = 0;
    else if(dp[N][K] != -1) ans = dp[N][K];
    else {
        int temp1 = P[N-1] + mangia(N-1, K-P[N-1], P, dp);
        int temp2 = mangia(N-1, K, P, dp);

        if(temp1 >= K && temp2 >= K) ans = min(temp1, temp2);
        else if(K-temp1 < K-temp2) ans = temp1;
        else ans = temp2;
    }
    
    if(N >= 0 && N <= MAXN+1 && K >= 0 && K <= MAXN+1)
        dp[N][K] = ans;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    //fscanf(stdin, "%d", &t);

    while(t--)
    {
        int n, k;
        int p[MAXN];
        int dp[MAXN+1][MAXN+1];

        fscanf(stdin, "%d %d", &n, &k);
        for(int i = 0; i < n; ++i)
            fscanf(stdin, "%d", &p[i]);

        for(int i = 0; i <= n; ++i)
            for(int j = 0; j <= k; ++j)
                dp[i][j] = -1;

        fprintf(stdout, "%d", mangia(n, k, p, dp));
    }
}
