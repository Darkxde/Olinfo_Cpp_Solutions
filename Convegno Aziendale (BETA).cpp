int coppie(int N, int C[])
{
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = C[i]; j != -1; j = C[j])
            ans++;
    }

    return ans;
}
