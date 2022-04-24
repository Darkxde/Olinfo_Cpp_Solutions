#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

//const int MAXN = 100000;
//const int MAXN = 100;

vector<vector<int>> adj;
vector<int> topo_sort;
vector<char> vis;
vector<double> probability;

void dfs(int S)
{
    vis[S] = true;

    for(int i : adj[S])
        if(!vis[i])
            dfs(i);
    topo_sort.push_back(S);
}

void topological_sort(int N)
{
    for(int i = 0; i < N; i++)
    {
        if(!vis[i])
            dfs(i);
    }

    reverse(topo_sort.begin(), topo_sort.end());
}

int slide(int N, int M, int P)
{
    int ans = N-P;

    adj.resize(N);
    vis.resize(N);
    fill(vis.begin(), vis.end(), false);
    probability.resize(N);
    fill(probability.begin(), probability.end(), 0.0f);

    for(int i=0,x,y; i < M; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
    }

    topological_sort(N);
    probability[0] = 1.0;
    for(int i : topo_sort)
    {
        for(int j : adj[i])
            probability[j] += probability[i]/adj[i].size();
    }

    for(int i = N-P+1; i < N; i++)
        if(probability[i] > probability[ans])
            ans = i;

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    //scanf("%d", &t);

    int n,m,p;

    while(t--)
    {
        cin >> n >> m >> p;
        printf("%d", slide(n,m,p));
    }
}
