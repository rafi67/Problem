#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, sum = 0, i=0;

    while(1) {
        cin >> n;
        if(n==0) break;
        else {
            while(i<5) {
                if(n%2==0) {
                    sum+=n;
                    ++i;
                }
                ++n;
            }
            cout << sum << "\n";
            sum = 0; i = 0;
        }
    }

    return 0;

}