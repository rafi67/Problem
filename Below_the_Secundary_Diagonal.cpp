#include <bits/stdc++.h>

using namespace std;

int main() {

    float M[12][12], sum = 0;
    char op;
    int cnt = 0, k = 10;

    cin >> op;

    for(int i=0; i<12; ++i)
        for(int j=0; j<12; ++j)
            cin >> M[i][j];
    
    for(int i=1; i<12; ++i) {
        for(int j=11; j>k; --j) {
            sum += M[i][j];
            ++cnt;
        }
        --k;
    }

    cout << fixed << setprecision(1);

    if(op=='S')
        cout << sum << "\n";
    else
        cout << sum/cnt << "\n";

    return 0;

}