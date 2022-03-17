#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n, a = 1, b;
    string s;

    cin >> n >> s;
    b = n;

    for(ll i = 0; i < n; i++)
    {
        if(s[i] == '<') printf("%lld ", a++);
        else printf("%lld ", b--);
    }

}
