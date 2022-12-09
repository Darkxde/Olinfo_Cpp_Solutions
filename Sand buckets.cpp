// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

// input data
int N, i;
vector<int> D;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N;
    D.resize(N);
    for (int i=0; i<N; i++)
        cin >> D[i];

    // insert your code here
    char ans = true;
	
	sort(D.begin(), D.end());
    for(int i = 0; i+1 < N; i++)
    	if(D[i] == D[i+1]) {
    		ans = false;
    		break;
		}

	if(ans) 
		fprintf(stdout, "Ok\n");
	else
		fprintf(stdout, "Impossible\n");
		
    return 0;
}
