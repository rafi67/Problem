#include <bits/stdc++.h>

using namespace std;

int main() {

    float s = 1;
    int j = 2;

    for(int i=3; i<=39; i+=2, j*=2) {
        s += (float) i/j;
    }

    cout << fixed << setprecision(2)
    << s << "\n";

    return 0;

}