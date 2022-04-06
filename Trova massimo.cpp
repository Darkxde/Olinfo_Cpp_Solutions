#include <vector>
#include <climits>
using namespace std;

int trova_massimo(int N, vector<int> V)
{
    int mx = INT_MIN;
    for(int i = 0; i < N; i++) mx = max(mx, V[i]);
    
    return mx;
}
