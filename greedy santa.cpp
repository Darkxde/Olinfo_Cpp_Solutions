#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

typedef long long ll;

//constexpr int MAXN = 100;

vector<vector<int>> dp;

int spesa_massima(int N, int B, vector<int>& vals)
{
    if(B < 0 || N == 0) return 0;
    else if(dp[N-1][B] != -1) return dp[N-1][B];

    int spesa;
    int tmp1 = vals[N-1] + spesa_massima(N-1, B-vals[N-1], vals);
    int tmp2 = spesa_massima(N-1, B, vals);

    if((tmp1 >= B) && (tmp2 >= B))
        spesa = min(tmp1, tmp2);
    else if((tmp1 < B) && (tmp2 < B))
        spesa = max(tmp1, tmp2);
    else if((tmp1 >= B))
        spesa = tmp1;
    else
        spesa = tmp2;

    dp[N-1][B] = spesa;
    return spesa;
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
        int n, b;
        vector<int> vals;

        fscanf(stdin, "%d %d", &n, &b);
        for(int i = 0, x; i < n; ++i) {
            fscanf(stdin, "%d", &x);
            vals.push_back(x);
        }

        for(int i = 0; i < n; i++) {
            vector<int> tmp;
            for(int j = 0; j <= b; j++) {
                tmp.push_back(-1);
            }
            dp.push_back(tmp);
        }

        fprintf(stdout, "%d\n", spesa_massima(n, b, vals));
    }
}
