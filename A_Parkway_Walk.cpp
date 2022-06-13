#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m;
    cin >> t;

    while (t--) {
        int sum = 0;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i<n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        if(sum<=m) cout << 0 << "\n";
        else cout << (sum-m) << "\n";
    }

    return 0;
}