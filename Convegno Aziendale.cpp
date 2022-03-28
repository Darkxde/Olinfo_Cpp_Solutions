#include <bits/stdc++.h>
using namespace std;

int coppie(int N, int C[])
{
    int head, ans = 0;
    vector<vector<int>> adj(N, vector<int>(0));

    for(int i = 0; i < N; i++)
    {
        if(C[i] == -1)
        {
            head = i;
            continue;
        }
        adj[C[i]].push_back(i);
    }

    vector<bool> vis(N, false);
    vector<int> dis(N, 0);
    queue<int> q;
    q.push(head);
    vis[head] = true;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int u : adj[f])
        {
            if(vis[u]) continue;
            vis[u] = true;
            q.push(u);
            dis[u] = dis[f]+1;
        }
    }

    for(int i : dis) ans += i;

    return ans;
}
