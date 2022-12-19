// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
	// uncomment the following lines if you want to read/write from files
	// ifstream cin("input.txt");
	// ofstream cout("output.txt");
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	cin.tie(0);

    int N;
    cin >> N;

    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    // insert your code here
    long long int ans = 1;
	  sort(S.begin(), S.end());
    for(int i = 1, x = 1; i < N; ++i) 
      if(S[i] > S[i-1]) ++x;
    	ans += x;
	  }

    cout << ans << endl; // print the result
    return 0;
}
