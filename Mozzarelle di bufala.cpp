#include <algorithm>
using namespace std;

const long long int MAXN=10000000;

struct mozzarella
{
    long long voto, indice;
    bool operator < (mozzarella& m)
    {
        return voto < m.voto;
    }
    
}arr[MAXN];

long long solve(int N, int* M, int* P) {
    long long ans = 0;
    for(long long i = 0; i < N; i++)
    {
        arr[i].voto = M[i]-P[i];
        arr[i].indice = i;
    }
    
    nth_element(arr, &arr[(N/2)-1], arr+N);
    for(long long i = 0; i < N/2; i++)
        ans += P[arr[i].indice];
    for(long long i = N/2; i < N; i++)
        ans += M[arr[i].indice];
        
    return ans;
}
