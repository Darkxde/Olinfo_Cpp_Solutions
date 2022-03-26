#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, k, ans = 0, day = -1, i = 0, best;
    vector<pair<int,int>> arr(0);
    cin >> k >> n;

    arr.resize(n);
    for(int i = 0;i < n; i++) cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(), arr.end());

    while(day < k-1)
    {
        best = arr[i].second;
        while(arr[i].first - 1 <= day)
        {
            best = max(best, arr[i].second);
            i++;
        }
        day = best;
        ans++;
    }

    printf("%d", ans);
}
