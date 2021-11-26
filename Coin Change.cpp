#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

ll coins[] = {1,2,5,10,20,50,100,200,500};
ll cents[] = {1,2,5,10,20,50};

int main()
{
    ll sum = 0, sumc = 0;
    for(int i = 0; i < 6; i++)
    {
        ll t;
        cin >> t;
        sumc += t*cents[i];
    }

    for(int i = 0; i < 9; i++)
    {
        ll t;
        cin >> t;
        sum += t*coins[i];
    }
    sum+= (sumc/100);
    sumc -= (sumc/100)*100;

    ll ans[15];

    for(int i = 8; i >= 0; i--)
    {
        ans[i+6] = 0;
        if(coins[i] <= sum)
        {
            ans[i+6]= sum/coins[i];
            sum-= (ans[i+6]*coins[i]);
        }
    }

    for(int i = 5; i >= 0; i--)
    {
        ans[i] = 0;
        if(cents[i] <= sumc)
        {
            ans[i]= sumc/cents[i];
            sumc-= (ans[i]*cents[i]);
        }
    }

    for(int i = 0; i < 15; i++) cout << ans[i] << " ";

}
