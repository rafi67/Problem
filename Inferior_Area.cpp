#include <bits/stdc++.h>

using namespace std;

int main() {

    double M[12][12], sum = 0;
    int l = 5, k = 7, cnt = 0;
    char op;
    cin >> op;

    for(int i=0; i<12; ++i)
        for(int j=0; j<12; ++j)
            cin >> M[i][j];

    for(int i=7; i<12; ++i) {
        for(int j=l; j<k; ++j) {
            sum += M[i][j];
            ++cnt;
        }
        --l;
        ++k;
    }

    cout << fixed << setprecision(1);

    if(op=='S')
        cout << sum << "\n";
    else
        cout << sum/cnt << "\n";

    return 0;

}