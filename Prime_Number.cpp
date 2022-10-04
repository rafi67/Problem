#include <bits/stdc++.h>

using namespace std;

int is_prime(int n) {
    for(int i=2; i*i<=n; ++i) if(n%i==0) return 0;
    return 1;
}

int main() {

    int t, x, r;
    cin >> t;

    while(t--) {
        cin >> x;
        r = is_prime(x);
        if(r) cout << x << " eh primo\n";
        else cout << x << " nao eh primo\n";
    }

    return 0;

}