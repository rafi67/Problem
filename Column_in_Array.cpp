#include <bits/stdc++.h>

using namespace std;

int main() {

    float M[12][12];
    int c;
    char op;
    cin >> c >> op;

    for(int i=0; i<12; ++i)
        for(int j=0; j<12; ++j)
            cin >> M[i][j];
    
    for(int i=1; i<12; ++i)
        M[i][c] += M[i-1][c];

    cout << fixed << setprecision(1);

    if(op=='s') cout << M[11][c] << "\n";
    else cout << M[11][c]/12 << "\n";

    return 0;

}