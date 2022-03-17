#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    
    if(n & 1) printf("dispari");
    else printf("pari");
}
