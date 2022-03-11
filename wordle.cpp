#include <iostream>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, alphabet = 26, missing = 0, ans = 1;
    char tmp;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp == '_') missing++;
        else alphabet--;
    }

    for(int i = 0; i < missing; i++)
        ans *= alphabet--;

    printf("%lld\n",ans);
}
