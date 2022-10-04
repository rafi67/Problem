#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, x, y, sum = 0;
    cin >> t;

    while(t--) {
        cin >> x >> y;
        while(y!=0) {
            if(x%2!=0) {
                sum+=x;
                --y;
            }
            ++x;
        }
        cout << sum << "\n";
        sum = 0; 
    }

    return 0;

}