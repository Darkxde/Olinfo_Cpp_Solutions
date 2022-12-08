#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

typedef long long ll;

long long ans;

void occulta(int len, long long num, int mod)
{
    if(len == 0) {
        return;
    }

    if((num%10) != 3) {
        num *= 10;
        num += 3;
        ans = max(ans, num%mod);
        occulta(len-1, num, mod);
        num -= 3;
        num /= 10;
    }

    if((num%10) != 6) {
        num *= 10;
        num += 6;
        ans = max(ans, num%mod);
        occulta(len-1, num, mod);
        num -= 6;
        num /= 10;
    }

    if((num%10) != 9) {
        num *= 10;
        num += 9;
        ans = max(ans, num%mod);
        occulta(len-1, num, mod);
        num -= 9;
        num /= 10;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    fscanf(stdin, "%d", &t);

    while(t--)
    {
        int cifre;
        long long mod;
        ans = 0;

        fscanf(stdin, "%d %d", &cifre, &mod);
        occulta(cifre, 0, mod);
        fprintf(stdout, "%lld ", ans);
    }
}
