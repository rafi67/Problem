#include <bits/stdc++.h>

using namespace std;

int main() {

    double x;
    vector<double>v;

    cin >> x;

    v.push_back(x);

    for(int i=1; i<100; ++i) {
        x/=2;
        v.push_back(x);
    }

    cout << fixed << setprecision(4);

    for(int i=0; i<100; ++i) 
        cout << "N[" << i << "] = " << v[i] << "\n";

    return 0;

}