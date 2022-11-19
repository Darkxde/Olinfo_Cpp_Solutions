#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

constexpr int MAXN = 100;
constexpr int MOD = 1e9 + 7;

int solve(int N, vector<int>& A)
{
    vector<vector<char>> dp(N, vector<char>(100, false));
    sort(A.begin(), A.end());

    for(int i = 0; i < 100; i++) {
        if(i < A[0] || (i % A[0])) dp[0][i] = false;
        else dp[0][i] = true;
    }

    for(int i = 1; i < N; i++) {
        for(int j = 0; j <= A[i]; j++) {
            dp[i][j] = dp[i-1][j];
        }

        dp[i][A[i]] = true;

        for(int j = A[i]+1; j < 100; j++) {
            dp[i][j] = dp[i-1][j] || dp[i][j-A[i]];
        }
    }

    int ans = 99;
    while(ans >= 0) {
        if(dp[N-1][ans] == false) break;
        ans--;
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--) {
        int n;
        vector<int> arr;

        cin >> n;
        for(int i = 0, x; i < n; i++) {
            cin >> x;
            arr.push_back(x);
        }

        printf("%d", solve(n, arr));
    }
}
