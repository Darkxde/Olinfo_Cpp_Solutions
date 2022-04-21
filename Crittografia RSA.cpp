long long fast_exp(int base, int exp, int M)
{
    if(exp==0) return 1;
    if(exp==1) return base%M;
    long long half, ans;
    half = fast_exp(base, exp/2, M);
    ans = (half*half)%M;
    if(exp%2) ans = (ans*base)%M;
    return ans;
}

void decifra(int N, int d, int L, int messaggio[], char plaintext[])
{
    for(int i = 0; i < L; i++)
    {
        plaintext[i] = fast_exp(messaggio[i], d, N);
    }
}
