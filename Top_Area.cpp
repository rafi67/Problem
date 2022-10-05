#include <bits/stdc++.h>

using namespace std;

int main() {

    double M[12][12], sum = 0;
    char op;
    int cnt = 0, k=11, l = 1;

    cin >> op;

    for(int i=0; i<12; ++i)
        for(int j=0; j<12; ++j)
            cin >> M[i][j];

    for(int i=0; i<5; ++i) {
        for(int j=l; j<k; ++j) {
            sum += M[i][j];
            ++cnt;
        }
        ++l;
        --k;
    }

    cout << fixed << setprecision(1);

    if(op=='S')
        cout << sum << "\n";
    else
        cout << sum/cnt << "\n";


    return 0;

}