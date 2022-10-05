#include <bits/stdc++.h>

using namespace std;

int main() {

    float M[12][12], sum = 0;
    char op;
    cin >> op;
    int cnt = 0;

    for(int i=0; i<12; ++i)
        for(int j=0; j<12; ++j)
            cin >> M[i][j];
    
    for(int i=0; i<12; ++i) 
        for(int j=i+1; j<12; ++j) {
            sum += M[i][j];
                ++cnt;
        } 
            


    cout << fixed << setprecision(1);

    if(op=='S') cout << sum << "\n";
    else cout << sum/cnt << "\n";

    return 0;

}