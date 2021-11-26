#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a,b,ans = -1,t;
    cin >> n;
    
    while(n--)
    {
        cin >> a >> b;
        t = a+b;
        if(t %2 == 0)
            if(t > ans) ans = t;
    }
    cout << ans;
}
