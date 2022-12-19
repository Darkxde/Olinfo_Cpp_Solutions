// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

// input data
int K, N, R, T;
vector<int> S;

int main() {
	// uncomment the following lines if you want to read/write from files
	// ifstream cin("input.txt");
	// ofstream cout("output.txt");
	
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    cin >> K;
    for (int j=0; j<K; j++) {
        cin >> N >> R >> T;
        S.resize(N);
        for (int i=0; i<N; i++)
            cin >> S[i];

        // insert your code here
		float m = 0.0f;
		for(int i = 0; i < N; ++i) m += S[i];
		m /= N;
		
		if(m > R+T) fprintf(stdout, "Cheater\n");
		else fprintf(stdout, "Innocent\n");
    }
    return 0;
}
