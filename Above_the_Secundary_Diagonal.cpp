#include <bits/stdc++.h>

using namespace std;

int main() {

    float M[12][12], sum = 0;
    char c;
    int cnt = 0, k = 11;

    cin >> c;

    for(int i=0; i<12; ++i) 
        for(int j=0; j<12; ++j)
            cin >> M[i][j];

    for(int i=0; i<11; ++i) {
        for(int j=0; j<k; ++j) {
            sum += M[i][j];
            ++cnt;
        }
        --k;
    }

    cout << fixed << setprecision(1);

    if(c=='S') 
        cout << sum << "\n";
    else 
        cout << sum/cnt << "\n";

    return 0;

}