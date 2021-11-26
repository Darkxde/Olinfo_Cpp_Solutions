bool visita(int N, int A[])
{
    int sum = 0,sumg = 0;
    for(int i = 0; i < N; i++) sum+=A[i];

    for(int i = 0; i < N; i++)
    {
        sumg += A[i];
        if(sum == sumg) return true;
        sum -= A[i];
    }

    return false;
}
