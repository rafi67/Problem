#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, year;
    cin >> t;

    while(t--) {
        cin >> year;
        year = 2015-year;
        if(year<1)
            cout << 1-year << " A.C.\n";
        else
            cout << year << " D.C.\n";
    }

    return 0;

}