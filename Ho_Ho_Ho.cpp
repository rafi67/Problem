#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; ++i) {
        if(i==n-1)
            cout << "Ho!\n";
        else
            cout << "Ho ";
    }

    return 0;

}