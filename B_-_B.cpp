#include <bits/stdc++.h>

using namespace std;

int main() {

    int sum = 0, sum2 = 0, in, winner;

    for(int i=1; i<=5; ++i) {
        for(int i=0; i<4; ++i) {
            cin >> in;
            sum+=in;
        }
        if(sum2<sum) {
            winner = i;
            sum2 = sum;
        }
        sum = 0;
    }

    cout << winner << " " << sum2 << "\n";

    return 0;

}