#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, z, j = 0, sum = 0;
    cin >> x >> z;

    while(z<=x) cin >> z;

    while(sum<=z) {
        sum+=x;
        ++x;
        ++j;
    }

    cout << j << "\n"; 

    return 0;

}