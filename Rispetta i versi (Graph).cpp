#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

//const int MAXN = 100000;
//const int MAXN = 100;


void disuguaglianze(int N, string S)
{
    vector<vector<int>> adj(N);
    vector<int> src(N, 0), L(N), ordinamento;
    list<int> q;

    for(int i = 0; i+1<N; i++)
    {
        if(S[i] == '<')
        {
            adj[i].push_back(i+1);
            src[i+1]++;
        }
        else
        {
            adj[i+1].push_back(i);
            src[i]++;
        }
    }

    for(int i = 0; i < N; i++) if(src[i] == 0) q.push_back(i);

    while(!q.empty())
    {
        int u = q.front();
        q.pop_front();
        ordinamento.push_back(u);
        while(!adj[u].empty())
        {
            int v = adj[u].back();
            adj[u].pop_back();
            src[v]--;
            if(src[v] == 0) q.push_back(v);
        }
    }

    for(int i : ordinamento)
    {
        L[ordinamento[i]] = i;
    }

    for(int i : L) printf("%d ", i+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    //scanf("%d", &t);

    int n;
    string s;

    while(t--)
    {
        cin >> n >> s;
        disuguaglianze(n,s);
    }
}
