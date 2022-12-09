#include <stdio.h>

// constraints
#define MAXN 30000

// input data
int N, K;
char passphrase[MAXN+10];
char soluzione[MAXN+10];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

	(2 == scanf("%d %d", &N, &K));
	(1 == scanf("%s", passphrase));

	// insert your code here
	int i,j,c,maxi;
	for(c=0,i=0; c<N-K; ++c) {
		maxi = i;
		for(j=i; j<i+K+1 && j < N;++j) {
			if(passphrase[j]>passphrase[maxi])maxi = j;
		}
		K -= (maxi-i);
		soluzione[c] = passphrase[maxi];
		i = maxi+1;
	}


	printf("%s\n", soluzione); // print the result
	return 0;
}
