#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

constexpr int MAXN = 11;
constexpr int MOD = 1e9 + 7;

int solve(int A, vector<vector<int>>& P)
{
    for(int i = A-2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            P[i][j] += max(P[i+1][j], P[i+1][j+1]);
        }
    }

    return P[0][0];
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
        int a;
        vector<vector<int>> piramide(MAXN);

        cin >> a;

        for(int i = 0; i < a; i++) {
            for(int j = 0, x; j < i+1; j++) {
                cin >> x;
                piramide[i].push_back(x);
            }
        }

        printf("%d", solve(a, piramide));
    }
}
