#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

char keyboard[1000];
vector<char> alphabet {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};


void solve()
{
    int n;
    string s,ans = "";
    cin >> n >> s;

    for(char c : s)
    {
        ans+=keyboard[c];
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //cin >> t;

    for(int i = 0; i+1<26; i++)
    {
        keyboard[alphabet[i]] = alphabet[i+1];
    }

    while(t--)
    {
        solve();
        //printf("\n");
    }
}
