#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0)
            cout << n / 2 << "\n";
        else
            cout << (n / 2) - 1 << '\n';
    }

    return 0;
}