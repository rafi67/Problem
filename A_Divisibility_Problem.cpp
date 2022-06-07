#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);

    int t;
    int a, b;

    cin >> t;

    for(int i = 0; i<t; i++) {
        cin >> a >> b;
        if(a%b==0) cout << 0 << "\n";
        else {
            int r = a%b;
            cout << b-r << "\n";
        }
    }

   return 0;

}