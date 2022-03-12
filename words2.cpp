#include <iostream>
#include <cstdlib>

#define mod 1000000007

using namespace std;
typedef long long ll;

ll binpow(ll a, ll b) {
    ll ans = 1;
    a %= mod;

    while(b) {
        if(b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }

    return ans%mod;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt","r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    ll ans = 0, n, tmp;

    cin >> s;
    n = s.size();

    for(ll i = 0, j = n-1; i < n; i++, j--) {
        tmp = s[i] - 96; //ascii a = 97
        ans = (ans % mod) + (binpow(26, j) * tmp) % mod;
    }
    --ans;

    printf("%lld\n",ans);
}
