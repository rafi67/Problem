#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, X, Y;
    cin >> t;

    while(t--) {
        cin >> X >> Y;
        if(X>Y) cout << "A\n";
        else cout << "B\n";
    }

    return 0;

}