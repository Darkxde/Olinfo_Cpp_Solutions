#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mat;

void inizia(int N, int M)
{
    mat.resize(M);
    for(int i = 0; i < N; i++) mat[0].push_back(i);
}

void sposta(int a, int b)
{
    int t = mat[a].back();
    mat[a].pop_back();
    mat[b].push_back(t);
}

int controlla(int a, int i)
{
    if(mat[a].size() < i+1) return -1;
    else return mat[a][i];
}
