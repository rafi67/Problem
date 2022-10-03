#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, j = 1;
    cin >> n;

    while(n--) {
        cout << j << " " << pow(j, 2) << " " << pow(j, 3) << "\n";
        ++j;
    }

    return 0;

}