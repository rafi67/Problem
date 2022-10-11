#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, f;
    string name;
    cin >> t;

    while(t--) {
        cin >> name >> f;
        if(name=="Thor")
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;

}