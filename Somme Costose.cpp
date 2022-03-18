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

    ll n, tmp, sum, ans = 0;

    cin >> n;

    priority_queue<ll, vector<ll>, greater<ll>> num;
    for(ll i = 0; i < n; i++)
    {
        cin >> tmp;
        num.push(tmp);
    }

    while(num.size() > 1)
    {
        sum = num.top();
        num.pop();
        sum += num.top();
        num.pop();
        num.push(sum);
        ans += sum;
    }

    printf("%lld\n", ans);
}
