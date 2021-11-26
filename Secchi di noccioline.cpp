int ContaOperazioni(int N,int K, int* secchi){
	int ans = 0, mor = 0, les = 0;
	
	for(int i = 0; i < N; i++)
    {
        if(secchi[i] > K) mor+=(secchi[i]-K);
        else les+=(K-secchi[i]);
    }

    if((les > mor) || (les == mor)) ans = les;
    else
    {
        ans = mor;
    }

    return ans;
}
