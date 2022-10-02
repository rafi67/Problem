#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int x, y;
        cin >> x >> y;
        if(x>y) {
            int result = 0;
            ++y;
            while(y<x) {
                if(y%2!=0) result += y;
                ++y;
            }
            cout << result << "\n";
        }
        else if(x<y) {
            int result = 0;
            ++x;
            while(x<y) {
                if(x%2!=0) result += x;
                ++x;
            }
            cout << result << "\n";
        }
        else cout << "0\n";
    }

    return 0;

}