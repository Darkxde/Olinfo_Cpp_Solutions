#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

const int MAXN = 100000;

int somma(int N, int A[])
{
    vector<int> pari, dispari;
    int ans = -1;
    for(int i = 0; i < N; i++)
    {
        if(A[i]&1) dispari.push_back(A[i]);
        else pari.push_back(A[i]);
    }
    sort(pari.begin(), pari.end());
    sort(dispari.begin(), dispari.end());

    int p = pari.size(), d = dispari.size();

    if(p >= 2)
    {
        ans = pari[p-1]+pari[p-2];
    }

    if(d >= 2)
    {
        ans = max(ans, dispari[d-1]+dispari[d-2]);
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
        int n, arr[MAXN];

        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];
        printf("%d", somma(n,arr));
    }
}
