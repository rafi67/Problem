#include <bits/stdc++.h>

using namespace std;

int main() {

    float M[12][12]; 
    int r;
    char op;

    cin >> r >> op;

    for(int i=0; i<12; ++i)
        for(int j=0; j<12; ++j)
            cin >> M[i][j];

    for(int i=0; i<12; ++i)
        if(i!=0) M[r][i] += M[r][i-1];

    cout << fixed << setprecision(1);

    if(op=='S') cout << M[r][11] << "\n";
    else cout << M[r][11]/12 << "\n";

    return 0;

}