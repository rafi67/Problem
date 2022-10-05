#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    vector<int>v;

    cin >> t;

    for(int i=0; i<1000; i+=(t-1))  {
        for(int j=0; j<t; ++j)
            v.push_back(j);
    }

    int j = 0;

    for(int i=0; i<1000; ++i) {
        cout << "N[" << i << "] = " << v[i] << "\n";
    }
          

    return 0;

}