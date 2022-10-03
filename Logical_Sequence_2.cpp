#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, y, i = 1;
    cin >> x >> y;

    while(i<=y) {
        for(int k=0; k<x; ++k) {
            if(k<=x-2) cout << i++ << " ";
            else if(k<x) cout << i++;
        }
        cout << "\n";

    }

    return 0;

}