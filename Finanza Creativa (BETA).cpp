#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

const int MAXN = 100;

void bianchetta(int N, int K, int U[], int C[])
{
    int el = K, inmin, li = -1, j = 0;

    while(el > 0) {
        inmin = li+1;
        for(int i = li+1; i < li+el+2; i++)
        {
            if(U[inmin] >= U[i]) inmin = i;
        }

        if(li == -1)
        {
            el-=inmin;
        }
        else
        {
            el = el-(inmin-li-1);
        }
        C[j++] = U[inmin];
        li = inmin;
    }

    for(int i = li+1; i < N; i++) C[j++] = U[i];

    for(int i = 0; i < N-K; i++) printf("%d ", C[i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, k;
    int u[MAXN], c[MAXN];

    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> u[i];

    bianchetta(n, k, u, c);
}
