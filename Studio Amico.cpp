void countingSort(int A[], int N)
{
    int frequency[10];
    for(int i = 0; i < 10; i++) frequency[i] = 0;
    for(int i = 0; i < N; i++) frequency[A[i]-1]++;
    
    int i = 0;
    for(int k = 0; k < 10; k++) 
        for(int j = 0; j < frequency[k]; j++)
            A[i++] = k;
}

bool associabili(int N, int voti2[], int voti5[])
{
    countingSort(voti2, N);
    countingSort(voti5, N);
    
    for(int i = 0; i < N; i++) 
        if(voti2[i] >= voti5[i]) return false;
    return true;
}
