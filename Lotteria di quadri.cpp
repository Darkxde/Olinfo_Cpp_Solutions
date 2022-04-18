int quadri(int N, long long M, int V[])
{
    int ans = 0;
    int i = 0;
    long long sum = 0;

    while((i < N) && (sum+V[i]<=M))
    {
        sum+=V[i];
        i++;
        ans++;
    }

    for(; i < N; i++)
    {
        if(V[i]>M) return 0;

        sum-=V[i-ans];
        sum+=V[i];

        while(sum > M)
        {
            ans--;
            sum-=V[i-ans];
        }
    }

    return ans;
}
