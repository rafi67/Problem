#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    if(y>x) {
        ++x;
        while(x<y) {
            if(x%5==2 || x%5==3) cout << x << "\n";
            ++x;
        }
    }
    else if(x>y) {
        ++y;
        while(y<x) {
            if(y%5==2 || y%5==3) cout << y << "\n";
            ++y;
        }
    }

    else cout << 0 << "\n";

    return 0;

}