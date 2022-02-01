    #include <bits/stdc++.h>
    #include <cstdlib>
    using namespace std;
    typedef long long ll;

    void solve()
    {
        ll n,last;
        bool flag = false;
        cin >> n;

        ll arr[n];
        for(ll i = 0; i < n; i++) cin >> arr[i];

        sort(arr,arr+n);
        for(ll i = 0; i+1< n; i++)
        {
            if(arr[i] == arr[i+1])
            {
                if(flag)
                {
                    if(arr[i] == last) continue;
                    printf("YES");
                    return;
                }
                else flag = true, last = arr[i];
            }
        }

        printf("NO");
    }

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t = 1;
        //cin >> t;

        while(t--)
        {
            solve();
            printf("\n");
        }
    }
