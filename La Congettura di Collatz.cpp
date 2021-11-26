#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,ans = 1;
    cin >> n;   
    while(n!=1)
    {
        if(n&1) n = n*3+1;
        else n>>=1;
        ans++;
    }
    cout << ans;
}
