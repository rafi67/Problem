#include <bits/stdc++.h>

using namespace std;

int main() {

    int n[20], j = 19;

    for(int i=0; i<20; ++i) cin >> n[i];

    for(int i=0; i<10; ++i, --j) {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }

    for(int i=0; i<20; ++i)
        cout << "N[" << i << "] = " << n[i] << "\n";

    return 0;

}