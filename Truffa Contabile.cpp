#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

const int MAXN = 100000;
//const int MAXN = 100;

int sfangate(int N, int V[])
{
    vector<int> neg;
    int sp = 0, sn = 0, ans = 0;
    for(int i = 0; i < N; i++)
    {
        if(V[i] > 0)
        {
            sp += V[i];
        }
        else
        {
            V[i]*=-1;
            neg.push_back(V[i]);
            sn += V[i];
        }
    }

    if(sp > sn) return 0;

    sort(neg.begin(), neg.end());
    while(sp <= sn && neg.size() > 0)
    {
        int b = neg.back();
        neg.pop_back();
        sp+=b;
        sn-=b;
        ans++;
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

    while(t--)
    {
        int n, v[MAXN];
        cin >> n;
        for(int i = 0; i < n; i++) cin >> v[i];
        printf("%d", sfangate(n,v));
    }
}
