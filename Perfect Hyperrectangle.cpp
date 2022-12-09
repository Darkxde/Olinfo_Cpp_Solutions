/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// input data
int N;
vector<int> V;

int main() {
//  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> N;
    V.resize(2*N);
    for (int i=0; i<2*N; i++)
        cin >> V[i];

    // insert your code here
    sort(V.begin(), V.end());
    
    int i;
    for (i=0; i<N; i++)
        fprintf(stdout, "%d ", V[i]);
    fprintf(stdout, "\n");
    for (; i<2*N; i++)
        fprintf(stdout, "%d ", V[i]);
    fprintf(stdout, "\n");
    return 0;
}v
