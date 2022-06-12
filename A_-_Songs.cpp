#include <bits/stdc++.h>

using namespace std;

int smallest(int a, int b, int c) {
    int s = a;
    if(s>b) s = b;
    else if(s>c) s = c;
    return s;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b && a==c) cout << 0 << '\n';
        else cout << smallest(a, b, c) << '\n';
    }

    return 0;

}