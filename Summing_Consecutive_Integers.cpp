#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, n, sum = 0;
    cin >> a >> n;

    while(n<=0) {
        cin >> n;
    }

    for(int i=1; i<=n; ++i) {
        sum+=a;
        ++a;
    }

    cout << sum << "\n";

    return 0;

}