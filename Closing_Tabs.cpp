#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;

    string action;

    cin >> n >> m;

    while(m--) {
        if(n==0) break;
        cin >> action;
        if(action=="fechou") {
            --n;
            n += 2;
        }
        else if(action=="clicou") --n;
    }

    cout << n << "\n";

    return 0;

}