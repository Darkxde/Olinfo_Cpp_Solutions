#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;



int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n = 0, i, ans = 0;
    string s, sn;
    bool flag;
    vector<char> mask(256, 0);

    getline(cin, sn);
    for(char c : sn)
    {
        n *= 10;
        n += (c - 48);
    }

    for(ll k = 0; k < n; k++)
    {
        getline(cin, s);

        flag = true;
        for(char c : s)
        {
            if(c < 65 || c > 122) continue;
            if(c > 90 && c < 97) continue;
            i = tolower(c);
            mask[i]++;
            if(mask[i] > 2){
                flag = false;
                break;
            }
        }
        if(flag) ans++;
        fill(mask.begin(), mask.end(), 0);
    }

    cout << ans << "\n";
}
