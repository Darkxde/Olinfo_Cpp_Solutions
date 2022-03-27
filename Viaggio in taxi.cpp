#include <stdio.h>
#include <assert.h>

#define MAXN 10000

int viaggia(int N, int C[])
{
    int ans = 0, last = C[0];
    for(int i = 0; i < N; i++)
    {
        if(C[i] < last) last = C[i];
        ans += last;
        last++;
    }
    
    return ans;
}


int C[MAXN];

int main() {
    FILE *fr, *fw;
    int N, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &C[i]));

    fprintf(fw, "%d\n", viaggia(N, C));
    fclose(fr);
    fclose(fw);
    return 0;
}
