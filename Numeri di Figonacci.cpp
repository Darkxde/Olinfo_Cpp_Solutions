#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

//const int MAXN = 10000000;
const int MAXN = 100;
const int MOD = 1e9+7;

int enumera(int N, int M)
{
    int dp[N+1], somma = -1;
    fill(dp, dp+N+1, 0);
    dp[0] = (-1%M+M)%M, dp[1] = (0%M+M)%M;

    for(int i = 1; i < N; i++)
    {
        int Gn = (((i%M+M)%M * (dp[i]%M+M)%M)%M - (somma%M+M)%M)%M;
        dp[i+1] = (Gn%M+M)%M;
        somma = ((somma%M+M)%M + (dp[i]%M+M)%M)%M;
    }

    return dp[N];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    //scanf("%d", &t);
    int n,m;
    while(t--)
    {
        cin >> n >> m;
        printf("%d", enumera(n,m));
    }
}
