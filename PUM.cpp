#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, j=1;
    cin >> n;

    while(n--) {
        for(int i=0; i<3; ++i) cout << j++ << " ";
        ++j;
        cout << "PUM\n";
    }

    return 0;

}