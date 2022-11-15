#include <algorithm>
using namespace std;

int tempo_massimo(int N, int A[], int B[])
{
    int LL = 0, LN = 0, RL = 0, RN = 0, NL = 0, NR = 0;

    for(int i = 0, l, r; i < N; i++) {
        l = A[i], r = B[i];

        int ll = LL, ln = LN, rl = RL, rn = RN, nl = NL, nr = NR;

        //non prendo nulla
        LN = max(ll, max(rl, nl));
        RN = nr;

        //vado a sinistra
        RL = nr + l;

        //vado a destra
        NR = max(ln, rn) + r;

        //vado a sinistra
        LL = max(ll, max(rl, nl)) + l;
        NL = max(ln, rn) + l;
    }

    return max(LL, max(LN, max(RL, max(RN, max(NL, NR)))));
}
