#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

constexpr int MAXN = 100;

void solve(int N, vector<int>& T)
{
    int best = 0, reorders = 0;

    for(int i = 0; i < N; i++) {
        if((i + T[i]) < (best + T[best])) {
            best = i;
            reorders++;
        }
    }

    printf("%d %d", (best + T[best]), reorders);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout

    int t = 1;
    //cin >> t;

    while(t--) {
        int n;
        vector<int> t(MAXN);

        cin >> n;
        for(int i = 0; i < n; i++) cin >> t[i];

        solve(n,t);
    }
}
