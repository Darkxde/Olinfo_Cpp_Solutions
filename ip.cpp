#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 4;

int main() {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);

        string ip1[N], ip2[N];
        ll tmp, ans = 0;

        for(int i = 0; i+1 < N; i++)
            getline(cin, ip1[i], '.');
        cin >> ip1[3];

        for(int i = 0; i+1 < N; i++)
            getline(cin, ip2[i], '.');
        cin >> ip2[3];

        for(int i = 0, j = 3; i < N; i++, j--) {
            tmp = stoi(ip2[i]) - stoi(ip1[i]);

            if(i == 3) tmp++;
            ans += tmp * pow(256, j);
        }

        cout << ans << endl;
}

