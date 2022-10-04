#include <bits/stdc++.h>

using namespace std;

int main() {

    int v, n[10];
    cin >> v;

    n[0] = v;

    for(int i=1; i<10; ++i)
        n[i] = n[i-1]*2;

    for(int i=0; i<10; ++i)
        cout << "N[" << i << "] = " << n[i] << "\n";

    return 0;

}