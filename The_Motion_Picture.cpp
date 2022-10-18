#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b;

    c = ((b-a)*100)/a;

    cout << fixed << setprecision(2) << c << "%\n"; 

    return 0;

}