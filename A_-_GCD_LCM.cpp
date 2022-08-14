#include <bits/stdc++.h>
#define ln << "\n";

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        if(b%a==0) {cout << a << " " << b ln;}
        else cout << -1 ln;        
    }

    return 0;

}