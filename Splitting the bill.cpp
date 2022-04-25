#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

const int MAXN = 200000;
//const int MAXN = 100;

void trasferimenti(int N, vector<int>& conto)
{
    int ans = 0;
    for(int i = 1; i < N; i++)
        if(conto[i] != 0) ans++;
    printf("%d\n",ans);

    for(int i = 1,w; i < N; i++)
    {
        w = conto[i];
        if(w > 0)
            printf("%d %d %d\n", i,0,w);
        else if(w < 0)
            printf("%d %d %d\n",0,i,-w);
    }
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
    vector<int> conto(MAXN, 0);

    while(t--)
    {
        cin >> n >> m;

        for(int i = 0,x,y,w; i < m; i++)
        {
            cin >> x >> y >> w;
            conto[x] -= w;
            conto[y] += w;
        }

        trasferimenti(n,conto);
    }
}
