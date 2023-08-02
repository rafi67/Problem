#include <bits/stdc++.h>

using namespace std;

int main() {

    int S, T, F, sum;
    
    cin >> S >> T >> F;

    if(S>0) {
        sum = S+T+F;
    }
    else {
        sum = 24+T+F;
    }

    if(sum>23) sum -= 24;

    cout << sum << "\n";

    return 0;

}