#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    stack<int> s;
    s.push(-1);
    for(int i = 0; i < n; i++)
    {
        if(s.top() == arr[i]) s.pop();
        else s.push(arr[i]);
    }

    if(s.top() == -1) printf("1");
    else printf("0");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
        printf("\n");
    }
}
